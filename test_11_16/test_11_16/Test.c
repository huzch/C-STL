#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//一级指针
//char* 
//int*
//二级指针
//int**
//char**
//指针数组 - 是数组，每个元素是指针
//char* arr[5];
//double* arr[5];
//数组指针 - 指针 - 是指向数组的指针
//int arr[10];
//int (*pa)[10] = &arr;
//char* arr[5];
//char* (*pa)[5] = &arr;
//
//函数指针 - 指针 -是指向函数的指针
//
//int test(char* c, int n)
//{
//	//...
//	return 0;
//}
//
//int main()
//{
//	int (*pf)(char*, int) = &test;//test
//	(*pf)("abcdef", 10);
//	test("abc", 5);
//	pf("abc", 5);
//
//	return 0;
//}
//

//int main()
//{
//	( *( void (*)() )0 )();
//
//	void (*signal(int, void(*)(int)))(int);
//
//	return 0;
//}
//
int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int (*pf)(int, int) = Add;//pf是函数指针

	int (*pfArr[4])(int, int) = { Add, Sub, Mul, Div };//存放函数指针的数组-函数指针数组
	//0    1    2    3
	int i = 0;
	for (i = 0; i < 4; i++)
	{
		int ret = pfArr[i](6, 2);
		printf("%d\n", ret);
	}
	return 0;
}

//
//实现一个计算器
//这个计算器能够计算整数的：加法、减法、乘法、除法
//& | ^ << >> && ||
//
//
void menu()
{
	printf("******************************\n");
	printf("****  1. add     2. sub   ****\n");
	printf("****  3. mul     4. div   ****\n");
	printf("****  0. exit             ****\n");
	printf("******************************\n");
}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	do
	{
		menu();
		printf("请选择:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入两个操作数:");
			scanf("%d %d", &x, &y);
			ret = Add(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("请输入两个操作数:");
			scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("请输入两个操作数:");
			scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("请输入两个操作数:");
			scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("退出计算器\n");
			break;
		default:
			printf("选择错误，重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
//
//
//void menu()
//{
//	printf("******************************\n");
//	printf("****  1. add     2. sub   ****\n");
//	printf("****  3. mul     4. div   ****\n");
//	printf("****  0. exit             ****\n");
//	printf("******************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	int ret = 0;
	do
	{
		menu();
		//函数指针数组的方式解决一下
		//这里的函数指针数组，我们称为转移表
		//
		int (*pfArr[])(int, int) = { NULL, Add, Sub, Mul, Div };
		//                           0     1    2    3    4
		printf("请选择:");
		scanf("%d", &input);

		if (input == 0)
		{
			printf("退出计算器\n");
		}
		else if (input >= 1 && input <= 4)
		{
			printf("请输入两个操作数:");
			scanf("%d %d", &x, &y);
			ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else
		{
			printf("选择错误，重新选择\n");
		}
	} while (input);
	return 0;
}
//
//
//
//void menu()
//{
//	printf("******************************\n");
//	printf("****  1. add     2. sub   ****\n");
//	printf("****  3. mul     4. div   ****\n");
//	printf("****  0. exit             ****\n");
//	printf("******************************\n");
//}
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int Mul(int x, int y)
//{
//	return x * y;
//}
//
//int Div(int x, int y)
//{
//	return x / y;
//}
//
//
////calc功能强大了
//
//void calc(int (*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入两个操作数:");
//	scanf("%d %d", &x, &y);
//	ret = pf(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);//完成计算	
//			break;
//		case 2:
//			calc(Sub);
//			break;
//		case 3:
//			calc(Mul);
//			break;
//		case 4:
//			calc(Div);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//
//

//
//void bubble_sort(int arr[], int sz)
//{
//	//趟数
//	int i = 0;
//	for(i=0; i<sz-1; i++)
//	{
//		//一趟冒泡排序的过程
//		//两两相邻元素的比较
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	//将一组整数排序为升序
//	int arr[10] = { 3,1,5,2,4,6,8,7,0,9 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}


//void qsort(
//    void* base,//base 指向了要排序的数组的第一个元素
//    size_t num, //base指向的数组中的元素个数（待排序的数组的元素的个数）
//    size_t size,//base指向的数组中元素的大小（单位是字节）
//    int (*compar)(const void*p1, const void*p2)//函数指针 - 指针指向的函数是用来比较数组中的2个元素的
//    );

//cmp_int 这个函数是用来比较p1和p2指向的元素的大小
//

#include <stdlib.h>
#include <string.h>


void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int cmp_int(const void* p1, const void* p2)
{
	return *(int*)p1 - *(int*)p2;
}

//测试qsort排序整型数据的
void test1()
{
	int arr[10] = { 3,1,5,2,4,6,8,7,0,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

//测试qsort函数排序结构体数据
struct Stu
{
	char name[20];//名字
	int age;
};

//
//怎么比较2个结构体数据？- 不能直接使用> < == 比较
//1. 可以按照名字比较
//2. 可以按照年龄比较
//
//按照年龄比较
int cmp_stu_by_age(const void* p1, const void* p2)
{
	return ((struct Stu*)p2)->age - ((struct Stu*)p1)->age;
}

void test2()
{
	struct Stu arr[] = { {"zhangsan", 20}, {"lisi", 38}, {"wangwu", 18} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
}

//两个字符串不能使用> < ==
//而是使用库函数strcmp - string compare
int cmp_stu_by_name(const void* p1, const void* p2)
{
	return strcmp(((struct Stu*)p1)->name, ((struct Stu*)p2)->name);
}

void test3()
{
	struct Stu arr[] = { {"zhangsan", 20}, {"lisi", 38}, {"wangwu", 18} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_name);
}

int main()
{
	//将一组整数排序为升序
	//test1();
	//test2();
	test3();
	return 0;
}

//void qsort(
//	void* base,//base 指向了要排序的数组的第一个元素
//	size_t num, //base指向的数组中的元素个数（待排序的数组的元素的个数）
//	size_t size,//base指向的数组中元素的大小（单位是字节）
//	int (*compar)(const void* p1, const void* p2)//函数指针 - 指针指向的函数是用来比较数组中的2个元素的
//)
//{
//	if (compar(x, y) > 0)
//	{
//		//交换
//	}
//}