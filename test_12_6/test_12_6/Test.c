#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n = 0;//
//	char ch = 'a';
//
//	//���� - ���һ���༶����ѧ�ɼ�
//	int arr[30] = {0};
//
//
//	return 0;
//}

#include <stdlib.h>
//
//int main()
//{
//	//int arr[10];//
//
//	int* p = (int*)malloc(10*sizeof(int));
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//
//	int i = 0;
//	//ʹ�� - �����鸳ֵ
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	//��ӡ
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//
//int main()
//{
//	//int arr[10];//
//
//	//int* p = (int*)malloc(10 * sizeof(int));
//	int*p = (int*)calloc(10, sizeof(int));
//
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//
//	int i = 0;
//	//��ӡ
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//�ռ䲻������Ҫ����ռ䣬20������
//	int* ptr = (int*)realloc(p, 12*sizeof(int));
//	if (ptr != NULL)
//	{
//		p = ptr;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//	//ʹ�ÿռ���
//	
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}



//int main()
//{
//	int*p = (int*)realloc(NULL, 40);//�ȼ���malloc
//
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}
//

//1. ��NULLָ��Ľ����ò���
//int main()
//{
//	int*p = (int*)malloc(100);
//	if (p == NULL)
//	{
//		//������Ϣ
//		perror("malloc");
//		return 1;
//	}
//	*p = 20;//p�п�����NULLָ���
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}


//2 �Զ�̬���ٿռ��Խ�����

//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//ʹ��
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//��ѭ������11��ʱ��Խ�������
//	}
//	//
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//3 �ԷǶ�̬�����ڴ�ʹ��free�ͷ�

//int main()
//{
//	int a = 10;
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//ʹ��
//	//...
//	p = &a;//pָ��Ŀռ�Ͳ����Ƕ����ϵĿռ�
//	free(p);
//	p = NULL;
//	//....
//
//	return 0;
//}


//int* test()
//{
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//		return NULL; 
//	else
//		return p;
//}
//
//int main()
//{
//	int* ret = test();
//
//	return 0;
//}

//4 ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����


//int main()
//{
//	int a = 10;
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}	
//	//ʹ��
//	p++;
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	return 0;
//}

//5 ��ͬһ�鶯̬�ڴ����ͷ�

//int main()
//{
//	int a = 10;
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	//ʹ��
//
//	//�ͷ�
//	free(p);
//	p = NULL;
//
//	free(p);
//	p = NULL;
//
//	return 0;
//}
// 
//6 ��̬�����ڴ������ͷţ��ڴ�й©��
//
//
//void test()
//{
//    int* p = (int*)malloc(100);
//    if (NULL != p)
//    {
//        *p = 20;
//    }
//    free(p);
//    p = NULL;
//}
//
//int main()
//{
//    test();
//    //
//    while (1);
//}



//void test()
//{
//    int* p = (int*)malloc(100);
//    if (NULL != p)
//    {
//        return;
//    }
//    free(p);
//    p = NULL;
//}
//
//int main()
//{
//    test();
//    //
//    while (1);
//}


//void GetMemory(char* p)
//{
//    p = (char*)malloc(100);
//}
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(str);
//    strcpy(str, "hello world");
//    printf(str);
//}
//
//
//int main()
//{
//    Test();
//    return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	printf("%s\n", arr);
//	printf("abcdef\n");
//	printf(arr);
//
//	return 0;
//}
// 
// 
//void GetMemory(char** p)
//{
//    *p = (char*)malloc(100);
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str);
//    strcpy(str, "hello world");
//    printf(str);
//    free(str);
//    str = NULL;
//}
//
//int main()
//{
//    Test();
//    return 0;
//}
#include <string.h>

//char* GetMemory()
//{
//    char* p = (char*)malloc(100);
//    return p;
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    str = GetMemory();
//    strcpy(str, "hello world");
//    printf(str);
//    free(str);
//    str = NULL;
//}
//
//int main()
//{
//    Test();
//    return 0;
//}
//


//char* GetMemory(void)
//{
//    static char p[] = "hello world";
//    return p;
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    str = GetMemory();
//    printf(str);
//}
//
//int main()
//{
//    Test();
//    return 0;
//}
//


//int* test()
//{
//	int n = 100;
//	return &n;
//}
//
//int main()
//{
//	int* ptr = test();
//	printf("hehe\n");
//
//	printf("%d\n", *ptr);
//
//	return 0;
//}
//
//

//
//void GetMemory(char** p, int num)
//{
//    *p = (char*)malloc(num);
//}
//
//void Test(void)
//{
//    char* str = NULL;
//    GetMemory(&str, 100);
//    strcpy(str, "hello");
//    printf(str);
//    free(str);
//    str = NULL;
//}
//
//int main()
//{
//    Test();
//    return 0;
//}

//void Test(void)
//{
//    char* str = (char*)malloc(100);
//    strcpy(str, "hello");
//    free(str);
//    str = NULL;
//
//    //str����Ұָ��
//    if (str != NULL)
//    {
//        strcpy(str, "world");//�Ƿ�����
//        printf(str);
//    }
//}
//
//int main()
//{
//    Test();
//    return 0;
//}

//
//
//struct St
//{
//	char c;
//	int n;
//	int arr[0];//
//};
//
//
//int main()
//{
//	//struct St s = {0};
//	//printf("%d\n", sizeof(struct St));
//	struct St* ps = (struct St*)malloc(sizeof(struct St) + 10 * sizeof(int));
//	if (ps == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	ps->c = 'w';
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	//����ռ䲻��
//	struct St* ptr = realloc(ps, sizeof(struct St) + 15 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	else
//	{
//		perror("realloc");
//		return 1;
//	}
//	//...����ʹ��
//
//	for (i = 10; i < 15; i++)
//	{
//		ps->arr[i] = i;
//	}
//
//	for (i = 0; i < 15; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	printf("\n%d\n", ps->n);
//	printf("%c\n", ps->c);
//
//
//
//	//�ͷ�
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}




struct St
{
	char c;
	int n;
	int* arr;
};


int main()
{
	//struct St s = {0};
	//printf("%d\n", sizeof(struct St));
	struct St* ps = (struct St*)malloc(sizeof(struct St));
	if (ps == NULL)
	{
		perror("malloc");
		return 1;
	}
	ps->c = 'w';
	ps->n = 100;

	ps->arr = (int*)malloc(10 * sizeof(int));
	if (ps->arr == NULL)
	{
		perror("malloc-2");
		return 1;
	}
	//ʹ��
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		ps->arr[i] = i;
	}

	//����ռ䲻��
	int* ptr = (int*)realloc(ps->arr, 15 * sizeof(int));
	if (ptr == NULL)
	{
		perror("realloc");
		return 1;
	}
	else
	{
		ps->arr = ptr;
	}
	//ʹ��
	for (i = 10; i < 15; i++)
	{
		ps->arr[i] = i;
	}
	for (i = 0; i < 15; i++)
	{
		printf("%d ", ps->arr[i]);
	}
	printf("\n%d\n", ps->n);
	printf("%c\n", ps->c);

	//�ͷ�
	free(ps->arr);
	ps->arr = NULL;

	free(ps);
	ps = NULL;

	return 0;
}