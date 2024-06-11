#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//scanf("%d", &arr[i]);
//		scanf("%d", p + i);
//	}
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", i[arr]);
//		//printf("%d ", arr[i]);
//		//printf("%d ", *(p + i));
//		//arr[i] == *(arr+i)
//		//p[i] == *(p+i)
//	}
//	return 0;
//}

//void test(char arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//}

//void test(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[12] = { 1,2,3,4,5,5,4,3,2,1,7,8 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	test(arr, sz);
//	return 0;
//}

void BubbleSort(int arr[], int sz)
{
	//趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//每一趟交换的对数
		int j = 0;
		int flag = 1;//假设表示有序
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };//降序
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}