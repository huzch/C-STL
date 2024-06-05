#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	int data[10] = {1,2,3,4,5,6,7,8,9,10};//完全初始化
//
//	int data2[10] = { 1,2,3,4,5 };//不完全初始化，剩余的元素默认初始化为0
//	//int data3[3] = { 1,2,3,4 };//err
//	
//	int data4[5] = { 1,2,3,4,5 };
//	int data5[] = { 1,2,3,4,5 };//数组如果初始化了，也可以省略掉数组的小制定，编译器会根据数组的初始化内容
//	//来确定数组的真实大小
//
//	return 0;
//}


//int main()
//{
//	//int a;
//	//char c;
//
//	int arr[4];//int [4]
//	char ch[5];//char [5]
//
//	return 0;
//}

//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//            0 1 2 3 4 5 6 7 8 9
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	//printf("%d\n", arr[6]);
//	//printf("%d\n", arr[9]);
//
//	return 0;
//}
//


//int main()
//{
//	int arr[10] = { 0 };
//	//想输入10个数
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//输出数组的元素
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//

//%p 是打印地址的

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//& - 取地址操作符
//	}
//	return 0;
//}

//
//一维数组在内存中是连续存放的
//随着数组下标的增长，地址是由小到大变化的
//






//int main()
//{
//	//int a = 10;
//	////sizeof 计算的是变量或者类型的长度，单位是字节
//
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//4
//
//
//	int arr[5] = { 0 };
//	printf("%d\n", sizeof(arr));//40 - 计算的是数组的总大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]) );
//
//	return 0;
//}
//


//int main()
//{
//	int arr[8] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//& - 取地址操作符
//	}
//	return 0;
//}



//int main()
//{
//	//int arr[3][5] = {1,2,3,4,5,6,7};//不完全初始化
//	////依次初始化每一行，当不够的时候，剩余的元素初始化为0
//	//int arr2[3][5] = { 0 };
//
//	//int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7};
//
//	//int arr[3][5] = { {1,2},{3,4},{5} };
//
//	//二维数组如果初始化，行是可以省略的，但是列不能省略
//	int arr[][5] = {1,2,3,4,5,6,7};
//
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6,3,4,5,6,7 };
//	printf("%d\n", arr[1][3]);
//	printf("%d\n", arr[2][4]);
//
//	return 0;
//}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//	//输入数据
//	int i = 0;//控制行
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//      //控制的是列
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			printf("%d ", arr[i][j]);
//		}
//	}
//
//	//输出数组的所有元素
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//		}
//		printf("\n");
//	}
//	return 0;
//}
//


//int main()
//{
//	int arr[3][5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//	}
//
//	return 0;
//}
//

//
//C99之前，数组的大小是用常量指定的
//C99之后，引入了变长数组的概念，可以使用变量来指定数组的大小
//遗憾的是，VS默认是不支持C99中的变长数组的
//
//int main()
//{
//	int arr1[10];
//	int arr2[3][5];
//	int n = 10;
//	int arr3[n];
//	return 0;
//}


//
//gcc 这个编译器来测试一下变长数组
//DevC++ 使用的就是 gcc
//
//linux 服务器上安装了gcc，vscode远程链接到服务器
//做个演示，服务器的使用，不需要掌握
//
//
//#define M 10
//int main()
//{
//	int arr[M];
//
//	return 0;
//}
//

//
//welcome to bit!!!!!!
//####################
//w##################!
//we################!!
//wel##############!!!
//welc############!!!!
//...
//welcome to bit!!!!!!
//
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	//[welcome to bit!!!!!!\0]
//	// 0                   
//	char arr2[] = "####################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠1000毫秒
//		system("cls");//system函数是库函数，执行系统指令，cls是清理控制台屏幕信息
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	//[welcome to bit!!!!!!\0]
//	// 0                   
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = strlen(arr1) - 1;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);//
//	int right = sz - 2;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠1000毫秒
//		system("cls");//system函数是库函数，执行系统指令，cls是清理控制台屏幕信息
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//升序的数组
//	//在数组中查找k - 7
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了, 下标是%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}

//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//升序的数组
//	//在数组中查找k - 7
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	
//	int left = 0;
//	int right = sz - 1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == k)
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//	//
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}





int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//升序的数组
	//在数组中查找k - 7
	int k = 0;
	scanf("%d", &k);
	int sz = sizeof(arr) / sizeof(arr[0]);

	int left = 0;
	int right = sz - 1;
	int flag = 0;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == k)
		{
			printf("找到了，下标是:%d\n", mid);
			flag = 1;
			break;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}
	}
	if (flag == 0)
		printf("找不到了\n");

	return 0;
}