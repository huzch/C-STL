#define _CRT_SECURE_NO_WARNINGS 1

//vs        --- MSVC
//С��èC++  --- gcc -- ��Դ
//
//#include <math.h>
#include <stdio.h>
//
//int main()
//{
//	double ret = sqrt(16.0);
//	printf("%lf\n", ret);
//
//	return 0;
//}

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//����
//	scanf("%d %d", &a, &b);
//
//	int sum = Add(a, b);
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//���n�������ͷ���1
//���n��ż���ͷ���0

//int test(int n)
//{
//	if (n % 2 == 1)
//		return 1;
//	else
//		return 0;
//}

//дһ��������ӡ1~n������

//void Print(int n)
//{
//	if (n < 1)
//		return;//������ǰ���أ���ǰ����
//
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		printf("%d ", i);
//	}
//}

//int test()
//{
//	//....
//	return 3.5;
//}
//
//int main()
//{
//	//int m = 0;
//	//scanf("%d", &m);
//	//Print(m);//1~100
//	int ret = test();
//	printf("%d\n", ret);
//	return 0;
//}

//
//int test()
//{
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 2 == 1)
//		return 1;
//}
//
//int main()
//{
//
//	return 0;
//}
//

//*************************
//*****  1. play    *******
//*****  0. exit    *******
//*************************


//void menu(void)
//{
//	printf("************************\n");
//	printf("*****   1. play    *****\n");
//	printf("*****   0. exit    *****\n");
//	printf("************************\n");
//}
//
//int main()
//{
//	menu();
//
//	return 0;
//}

//void test(void)
//{
//	printf("hehe\n");
//}
//
//
//int main()
//{
//	test();
//	test(1);
//	test(100);
//	test(100,200);
//
//	return 0;
//}

//�����ķ����������ʲô����д��Ĭ�Ϻ����ķ���������int
//test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	int ret = test();
//	printf("%d\n", ret);
//
//	return 0;
//}
//

//
//1. ʵ�κ��βε����ֿ�����ͬ
//2. ���鴫��д����������
//3. �β�д��Ҳ���������ʽ���������β���д��ʱ�����ʡ��Ԫ�ظ��������һά���飩
//4. ���鴫�κ���ʽ�������ʵ�ε�������ͬһ��ռ䣬�ı��βε�����������޸�ʵ�����飨Ϊʲô�أ���
//
//
//void set_arr(int arr2[], int sz2)
//{
//	int i = 0;
//	for (i = 0; i < sz2; i++)
//	{
//		arr2[i] = -1;
//	}
//}
//
//void print_arr(int arr[],int sz)
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
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//
//	print_arr(arr1, sz1);//��ӡ�������������
//	set_arr(arr1, sz1);//�������Ԫ��ȫ������Ϊ-1
//	print_arr(arr1, sz1);//��ӡ�������������
//
//	return 0;
//}
//31 28 31 30 31 30 31 31 30 31 30 31
//   29

//�����귵��1
//�������귵��0
//������жϣ�
//1. �ܱ�4���������Ҳ��ܱ�100����
//2. �ܱ�400����
//
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int get_days_of_month(int y, int m)//2020 3
//{
//	int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	//               1   2   3   4   5   6   7   8    9  10  11  12
//	int day = days[m];
//	//�����2������Ҫ������� - 29��
//	if (is_leap_year(y) && m == 2)
//	{
//		day++;
//	}
//	return day;
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);//2020 2
//	int d = get_days_of_month(year, month);
//	printf("%d\n", d);
//
//	return 0;
//}

//#include <string.h>
//
//int main()
//{
//	//size_t len = strlen("abcdef");//a b c d e f \0
//	//printf("%zd\n", len);
//
//	printf("%zd\n", strlen("abcdef"));
//
//	return 0;
//}
//


//int main()
//{
//	printf("%d", printf("%d ", printf("%d ", 43)));
//	return 0;
//}

//�������� - �����ڸ��߱��������������֣���������������
//int is_leap_year(int y);
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = is_leap_year(year);//��������
//	if (ret == 1)
//		printf("����\n");
//	else
//		printf("��������\n");
//
//	return 0;
//}
//
////��������
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}



//�������� - ��һ�����������

//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	int ret = is_leap_year(year);//��������
//	if (ret == 1)
//		printf("����\n");
//	else
//		printf("��������\n");
//
//	return 0;
//}
//

//include�ǰ�������˼���������Ҫ����add.h����ļ�

#include "Add.h"//�Լ�������ͷ�ļ�ʹ��""

//��ʵ�ϣ���������ҵ��д�����ʱ�򣬺����������Ͷ���������ô��ʹ�õģ�
int main()
{
	int a = 30;
	int b = 20;

	//��������
	int c = Add(a, b);
	printf("%d\n", c);

	return 0;
}