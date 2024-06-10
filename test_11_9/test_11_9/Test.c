#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int* pa = &a;
//	//char* pc = &a;
//	void* pa = &a;
//	void* pc = &a;
//
//	*pa = 10;
//	*pc = 0;
//	return 0;
//}

//int main()
//{
//	const int n = 0;
//	printf("n = %d\n", n);
//	int* const p = &n;
//	*p = 20;
//	printf("n = %d\n", n);
//	return 0;
//}

//int main()
//{
//	//指针-指针 = 地址-地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%d\n", &arr[0] - &arr[9]);
//	//9 - 指针-指针的绝对值是指针和指针之间的元素个数
//	//指针-指针运算的前提条件是：两个指针指向同一块空间
//
//	char ch[20] = {0};
//	printf("%d\n", &ch[0] - &arr[0]);//err
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	//使用while循环打印arr的内容
//	int*p = &arr[0];
//	//arr是数组名，数组名其实是数组首元素的地址，arr<==>&arr[0]
//	while (p < arr + sz)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,67,7,8,9,10 };
	int* p = &arr[0];
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p++) = i;
	}
	//此时p已经越界了，可以把p置为NULL
	p = NULL;
	//下次使?的时候，判断p不为NULL的时候再使?
	//...
	p = &arr[0];//重新让p获得地址
	if (p != NULL) //判断
	{
		//...
	}
	return 0;
}