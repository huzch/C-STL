#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	int a = 10;
//	int* p = &a;//取出a的地址
//	//p是指针变量，是一级指针
//	int * * pp = &p;//pp是二级指针
//
//	//int** *ppp = &pp;//ppp是三级指针(用的很少)
//	//...
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;//取出a的地址
//	//p是指针变量，是一级指针
//	int** pp = &p;//pp是二级指针,二级指针变量是用来存放一级指针变量的地址
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
//	int* arr[3] = {arr1, arr2, arr3};//整型指针数组
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
//	//char* pc = &ch;//pc就是字符指针
//
//	const char* p = "abcdef";//不是把字符串abcdef\0存放在p中，而是把第一个字符的地址存放在p中
//	//printf("%c\n", *p);
//
//
//	//1. 你可以把字符串想象为一个字符数组，但是这个数组是不能修改的
//	//2. 当常量字符串出现在表达式中的时候，它的值是第一个字符的地址
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
//	int (*parr)[10] = &arr;//取出的是数组的地址
//
//	//parr 就是数组指针
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
//	int (*p3)[10] = &arr;//p3是数组指针
//	//int (*)[10]   int (*)[10] 
//	//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//指针访问数组
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
//	//指针访问数组
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

//二维数组传参，形参写的是二维数组
//void Print(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)//行
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
//	for (i = 0; i < r; i++)//行
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
//	Print(arr, 3, 5);//打印arr数组的内容
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
//	//int* pa = &a;//整型指针
//
//	//int arr[10] = {0};
//	//int (*parr)[10] = &arr;//数组指针
//
//	//函数指针变量 是用来存放函数的地址的
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//
//	//int (* pf)(int, int) = &Add;//pf就是函数指针变量
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

//上述代码是函数声明
//signal是一个函数
//signal函数的参数有2个，第一个是int类型
//第二个是函数指针类型，该指针指向的函数参数是int，返回类型是void
//signal函数的返回类型是这种类型的void(*)(int)函数指针
//该指针指向的函数参数是int，返回类型是void
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