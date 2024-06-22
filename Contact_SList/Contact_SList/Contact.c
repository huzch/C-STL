#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"


void ContactDestroy(Contact** pc)
{
	Contact* cur = *pc;
	while (cur)
	{
		Contact* next = cur->next;
		free(cur);
		cur = next;
	}
	*pc = NULL;
}

void ContactPrint(Contact* pc)
{
	printf("%s\t%s\t%s\t%s\t%s\n", "name", "sex", "age", "tel", "addr");
	Contact* cur = pc;
	while (cur)
	{
		printf("%s\t%s\t%d\t%s\t%s\n",
			cur->val.name,
			cur->val.sex,
			cur->val.age,
			cur->val.tel,
			cur->val.addr);
		cur = cur->next;
	}
}

void ContactInsert(Contact** pc, Contact* pos)
{
	Contact* Guard = (Contact*)malloc(sizeof(Contact));
	Guard->next = *pc;
	Contact* prev = Guard;
	Contact* cur = prev->next;

	while (cur && cur != pos)
	{
		prev = prev->next;
		cur = cur->next;
	}

	Contact* node = (Contact*)malloc(sizeof(Contact));
	printf("name:");
	scanf("%s", node->val.name);
	printf("sex:");
	scanf("%s", node->val.sex);
	printf("age:");
	scanf("%d", &(node->val.age));
	printf("tel:");
	scanf("%s", node->val.tel);
	printf("addr:");
	scanf("%s", node->val.addr);

	node->next = cur;
	prev->next = node;
	printf("insert successfully!\n");

	*pc = Guard->next;
	free(Guard);
}

void ContactErase(Contact** pc, Contact* pos)
{
	Contact* Guard = (Contact*)malloc(sizeof(Contact));
	Guard->next = *pc;
	Contact* prev = Guard;
	Contact* cur = prev->next;

	while (cur && cur != pos)
	{
		prev = prev->next;
		cur = cur->next;
	}

	if (cur)
	{
		prev->next = cur->next;
		free(cur);
	}

	*pc = Guard->next;
	free(Guard);
}

Contact* ContactFind(Contact* pc)
{
	char ch[20] = { 0 };
	printf("name:");
	scanf("%s", ch);

	Contact* cur = pc;
	while (cur)
	{
		if (strcmp(cur->val.name, ch) == 0)
		{
			return cur;
		}
		cur = cur->next;
	}

	return NULL;
}