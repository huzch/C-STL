#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int a = 10;
//	int* p = &a;//ȡ��a�ĵ�ַ
//	//p��ָ���������һ��ָ��
//	int * * pp = &p;//pp�Ƕ���ָ��
//
//	//int** *ppp = &pp;//ppp������ָ��(�õĺ���)
//	//...
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;//ȡ��a�ĵ�ַ
//	//p��ָ���������һ��ָ��
//	int** pp = &p;//pp�Ƕ���ָ��,����ָ��������������һ��ָ������ĵ�ַ
//
//	printf("%d\n", **pp);
//
//	return 0;
//}


//
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* arr[3] = {arr1, arr2, arr3};//����ָ������
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%d ", arr[i]);
//		printf("%d ", *(arr + i));//arr[i] === *(arr+i)
//	}
//	return 0;
//}


//int main()
//{
//	//char ch = 'w';
//	//char* pc = &ch;//pc�����ַ�ָ��
//
//	const char* p = "abcdef";//���ǰ��ַ���abcdef\0�����p�У����ǰѵ�һ���ַ��ĵ�ַ�����p��
//	//printf("%c\n", *p);
//
//
//	//1. ����԰��ַ�������Ϊһ���ַ����飬������������ǲ����޸ĵ�
//	//2. �������ַ��������ڱ��ʽ�е�ʱ������ֵ�ǵ�һ���ַ��ĵ�ַ
//
//	printf("%c\n", "abcdef"[3]);
//	printf("%c\n", p[3]);
//
//	p[3] = 'q';//err
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    char str1[] = "hello bit.";
//    char str2[] = "hello bit.";
//
//    const char* str3 = "hello bit.";
//    const char* str4 = "hello bit.";
//
//    if (str1 == str2)
//        printf("str1 and str2 are same\n");
//    else
//        printf("str1 and str2 are not same\n");
//
//    if (str3 == str4)
//        printf("str3 and str4 are same\n");
//    else
//        printf("str3 and str4 are not same\n");
//
//    return 0;
//}
//


//int main()
//{
//	int n = 100;
//	int* pn = &n;
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	float f = 3.14f;
//	float* pf = &f;
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int (*parr)[10] = &arr;//ȡ����������ĵ�ַ
//
//	//parr ��������ָ��
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p1 = arr;
//	//int*     int*
//	int* p2 = &arr[0];
//	//int*     int*
//	int (*p3)[10] = &arr;//p3������ָ��
//	//int (*)[10]   int (*)[10] 
//	//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//ָ���������
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//ָ���������
//	int (*p)[10] = &arr;
//	printf("%p\n", arr);
//	printf("%p\n", arr+1);
//
//	printf("%p\n", p);
//	printf("%p\n", p+1);
//
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", (*p)[i]);//
//		p  == &arr
//		*p == *&arr == arr
//	}
//	return 0;
//}

//��ά���鴫�Σ��β�д���Ƕ�ά����
//void Print(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)//��
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void Print(int (*arr)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)//��
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(arr+i)+j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	Print(arr, 3, 5);//��ӡarr���������
//
//	return 0;
//}



//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//int a = 10;
//	//int* pa = &a;//����ָ��
//
//	//int arr[10] = {0};
//	//int (*parr)[10] = &arr;//����ָ��
//
//	//����ָ����� ��������ź����ĵ�ַ��
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//
//	//int (* pf)(int, int) = &Add;//pf���Ǻ���ָ�����
//	//int ret = Add(3, 5);
//	//printf("%d\n", ret);//8
//
//	//int ret2 = (*pf)(4, 9);
//	//printf("%d\n", ret2);//13
//
//	int(* pf2)(int, int) = Add;
//	int ret3 = (*pf2)(5, 6);
//	printf("%d\n", ret3);
//
//	int ret4 = pf2(5, 6);
//	printf("%d\n", ret4);
//
//	return 0;
//}



//char* test(int a, char c)
//{
//	//...
//	return NULL;
//}
//
//int main()
//{
//	char* (*pt)(int, char) = test;
//
//	return 0;
//}


//int main()
//{
//	(*(void (*)())0)();
//
//	return 0;
//}


void (*signal(int, void(*)(int)))(int);

typedef void(*pf_t)(int);
pf_t signal(int, pf_t);


//int main()
//{
//
//	return 0;
//}

//���������Ǻ�������
//signal��һ������
//signal�����Ĳ�����2������һ����int����
//�ڶ����Ǻ���ָ�����ͣ���ָ��ָ��ĺ���������int������������void
//signal�����ķ����������������͵�void(*)(int)����ָ��
//��ָ��ָ��ĺ���������int������������void
//

typedef unsigned int uint;

typedef int(*pArr_t)[10];

typedef int (*pf_t)(int, int);

int main()
{
	unsigned int num;
	uint num2;
	pArr_t pa;
	int(*pb)[10];
	pf_t pf;
	int (*pf2)(int, int);

	return 0;
}