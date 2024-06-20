#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"

void ContactInit(Contact* pc)
{
	pc->arr = (Info*)malloc(4 * sizeof(Info));
	pc->capacity = 4;
	pc->size = 0;
}

void ContactDestroy(Contact* pc)
{
	free(pc->arr);
	pc->arr = NULL;
	pc->capacity = pc->size = 0;
}

void ContactPrint(Contact* pc)
{
	printf("%s\t%s\t%s\t%s\t%s\n", "name", "sex", "age", "tel", "addr");
	for (size_t i = 0; i < pc->size; ++i)
	{
		printf("%s\t%s\t%d\t%s\t%s\n",
			pc->arr[i].name,
			pc->arr[i].sex,
			pc->arr[i].age,
			pc->arr[i].tel,
			pc->arr[i].addr);
	}
}

void reserve(Contact* pc, size_t n)
{
	Info* tmp = (Info*)realloc(pc->arr, n * sizeof(Info));
	if (tmp == NULL)
	{
		perror("realloc fail");
		return;
	}

	pc->arr = tmp;
	pc->capacity = n;
}

void ContactInsert(Contact* pc, size_t pos)
{
	assert(pos >= 0 && pos <= pc->size);

	if (pc->size + 1 > pc->capacity)
	{
		reserve(pc, 2 * pc->capacity);
	}

	for (size_t i = pc->size + 1; i > pos; --i)
	{
		pc->arr[i] = pc->arr[i - 1];
	}

	printf("name:");
	scanf("%s", pc->arr[pos].name);
	printf("sex:");
	scanf("%s", pc->arr[pos].sex);
	printf("age:");
	scanf("%d", &(pc->arr[pos].age));
	printf("tel:");
	scanf("%s", pc->arr[pos].tel);
	printf("addr:");
	scanf("%s", pc->arr[pos].addr);
	printf("insert successfully!\n");

	pc->size++;
}

void ContactErase(Contact* pc, size_t pos)
{
	assert(pos >= 0 && pos < pc->size);

	for (size_t i = pos; i < pc->size; ++i)
	{
		pc->arr[i] = pc->arr[i + 1];
	}
	pc->size--;
}

size_t ContactFind(Contact* pc)
{
	char ch[20] = { 0 };
	printf("name:");
	scanf("%s", ch);

	for (size_t i = 0; i < pc->size; ++i)
	{
		if (!strcmp(ch, pc->arr[i].name))
		{
			return i;
		}
	}
	return -1;
}