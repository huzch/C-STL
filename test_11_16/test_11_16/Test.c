#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//һ��ָ��
//char* 
//int*
//����ָ��
//int**
//char**
//ָ������ - �����飬ÿ��Ԫ����ָ��
//char* arr[5];
//double* arr[5];
//����ָ�� - ָ�� - ��ָ�������ָ��
//int arr[10];
//int (*pa)[10] = &arr;
//char* arr[5];
//char* (*pa)[5] = &arr;
//
//����ָ�� - ָ�� -��ָ������ָ��
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
	int (*pf)(int, int) = Add;//pf�Ǻ���ָ��

	int (*pfArr[4])(int, int) = { Add, Sub, Mul, Div };//��ź���ָ�������-����ָ������
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
//ʵ��һ��������
//����������ܹ����������ģ��ӷ����������˷�������
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
		printf("��ѡ��:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("����������������:");
			scanf("%d %d", &x, &y);
			ret = Add(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("����������������:");
			scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("����������������:");
			scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("����������������:");
			scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("�˳�������\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
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
		//����ָ������ķ�ʽ���һ��
		//����ĺ���ָ�����飬���ǳ�Ϊת�Ʊ�
		//
		int (*pfArr[])(int, int) = { NULL, Add, Sub, Mul, Div };
		//                           0     1    2    3    4
		printf("��ѡ��:");
		scanf("%d", &input);

		if (input == 0)
		{
			printf("�˳�������\n");
		}
		else if (input >= 1 && input <= 4)
		{
			printf("����������������:");
			scanf("%d %d", &x, &y);
			ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else
		{
			printf("ѡ���������ѡ��\n");
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
////calc����ǿ����
//
//void calc(int (*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("����������������:");
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
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calc(Add);//��ɼ���	
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
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
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
//	//����
//	int i = 0;
//	for(i=0; i<sz-1; i++)
//	{
//		//һ��ð������Ĺ���
//		//��������Ԫ�صıȽ�
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
//	//��һ����������Ϊ����
//	int arr[10] = { 3,1,5,2,4,6,8,7,0,9 };
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}


//void qsort(
//    void* base,//base ָ����Ҫ���������ĵ�һ��Ԫ��
//    size_t num, //baseָ��������е�Ԫ�ظ�����������������Ԫ�صĸ�����
//    size_t size,//baseָ���������Ԫ�صĴ�С����λ���ֽڣ�
//    int (*compar)(const void*p1, const void*p2)//����ָ�� - ָ��ָ��ĺ����������Ƚ������е�2��Ԫ�ص�
//    );

//cmp_int ��������������Ƚ�p1��p2ָ���Ԫ�صĴ�С
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

//����qsort�����������ݵ�
void test1()
{
	int arr[10] = { 3,1,5,2,4,6,8,7,0,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	print_arr(arr, sz);
}

//����qsort��������ṹ������
struct Stu
{
	char name[20];//����
	int age;
};

//
//��ô�Ƚ�2���ṹ�����ݣ�- ����ֱ��ʹ��> < == �Ƚ�
//1. ���԰������ֱȽ�
//2. ���԰�������Ƚ�
//
//��������Ƚ�
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

//�����ַ�������ʹ��> < ==
//����ʹ�ÿ⺯��strcmp - string compare
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
	//��һ����������Ϊ����
	//test1();
	//test2();
	test3();
	return 0;
}

//void qsort(
//	void* base,//base ָ����Ҫ���������ĵ�һ��Ԫ��
//	size_t num, //baseָ��������е�Ԫ�ظ�����������������Ԫ�صĸ�����
//	size_t size,//baseָ���������Ԫ�صĴ�С����λ���ֽڣ�
//	int (*compar)(const void* p1, const void* p2)//����ָ�� - ָ��ָ��ĺ����������Ƚ������е�2��Ԫ�ص�
//)
//{
//	if (compar(x, y) > 0)
//	{
//		//����
//	}
//}