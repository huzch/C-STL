#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen fail");
//		return 1;
//	}
//	
//	for (int i = 0; i < 26; ++i)
//	{
//		fputc('a' + i, pf);
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen fail");
//		return 1;
//	}
//
//	for (int i = 0; i < 26; ++i)
//	{
//		printf("%c ", fgetc(pf));
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen fail");
//		return 1;
//	}
//	
//	for (int i = 0; i < 5; ++i)
//	{
//		fputs("hello world\n", pf);
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen fail");
//		return 1;
//	}
//
//	char arr[20] = "xxxxxxxxxxxxxxxxx";
//
//	fgets(arr, 10, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//typedef struct stu
//{
//	char name[20];
//	int age;
//	float score;
//}stu;
//
//int main()
//{
//	//stu s = { "zhangsan", 20, 90.1 };
//	stu s = { 0 };
//	fscanf(stdin, "%s %d %f", s.name, &(s.age), &(s.score));
//	fprintf(stdout, "%s %d %f", s.name, s.age, s.score);
//	return 0;
//}

//int main()
//{
//	FILE* pfread = fopen("data.txt", "r");
//	if (pfread == NULL)
//	{
//		perror("fopen fail -> pfread");
//		return 1;
//	}
//
//	FILE* pfwrite = fopen("data2.txt", "w");
//	if (pfwrite == NULL)
//	{
//		fclose(pfread);
//		perror("fopen fail -> pfwrite");
//		return 1;
//	}
//
//	char ch = 0;
//	while ((ch = fgetc(pfread)) != EOF)
//	{
//		fputc(ch, pfwrite);
//	}
//
//	fclose(pfread);
//	fclose(pfwrite);
//	return 0;
//}
// 
typedef struct stu
{
	char name[20];
	int age;
	float score;
}stu;

//int main()
//{
//	stu s = { "lisi", 19, 69.36 };
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen fail");
//		return 1;
//	}
//
//	fwrite(&s, sizeof(s), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	stu s = { 0 };
//	FILE* pf = fopen("data.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen fail");
//		return 1;
//	}
//
//	fread(&s, sizeof(s), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("data.txt", "r");
//
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//
//	fseek(pf, -3, SEEK_END);
//
//	printf("%c", fgetc(pf));
//	printf("%c\n", fgetc(pf));
//
//	rewind(pf);
//	printf("%d", ftell(pf));
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

int main()
{
	FILE* pf = fopen("data.txt", "r");
	if (pf == NULL)
	{
		perror("fopen fail");
		return 1;
	}

	int ch = 0;
	while ((ch = fgetc(pf)) != EOF)
	{
		putchar(ch);
	}

	if (feof(pf))
	{
		printf("reach the end of file");
	}
	else if (ferror(pf))
	{
		printf("I/O error while reading");
	}

	fclose(pf);
	pf = NULL;
	return 0;
}