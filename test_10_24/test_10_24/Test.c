#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>


//int main()
//{
//	int data[10] = {1,2,3,4,5,6,7,8,9,10};//��ȫ��ʼ��
//
//	int data2[10] = { 1,2,3,4,5 };//����ȫ��ʼ����ʣ���Ԫ��Ĭ�ϳ�ʼ��Ϊ0
//	//int data3[3] = { 1,2,3,4 };//err
//	
//	int data4[5] = { 1,2,3,4,5 };
//	int data5[] = { 1,2,3,4,5 };//���������ʼ���ˣ�Ҳ����ʡ�Ե������С�ƶ������������������ĳ�ʼ������
//	//��ȷ���������ʵ��С
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
//	//������10����
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//��������Ԫ��
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//

//%p �Ǵ�ӡ��ַ��

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//& - ȡ��ַ������
//	}
//	return 0;
//}

//
//һά�������ڴ�����������ŵ�
//���������±����������ַ����С����仯��
//






//int main()
//{
//	//int a = 10;
//	////sizeof ������Ǳ����������͵ĳ��ȣ���λ���ֽ�
//
//	//printf("%d\n", sizeof(a));//4
//	//printf("%d\n", sizeof(int));//4
//
//
//	int arr[5] = { 0 };
//	printf("%d\n", sizeof(arr));//40 - �������������ܴ�С����λ���ֽ�
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
//		printf("&arr[%d] = %p\n", i, &arr[i]);//& - ȡ��ַ������
//	}
//	return 0;
//}



//int main()
//{
//	//int arr[3][5] = {1,2,3,4,5,6,7};//����ȫ��ʼ��
//	////���γ�ʼ��ÿһ�У���������ʱ��ʣ���Ԫ�س�ʼ��Ϊ0
//	//int arr2[3][5] = { 0 };
//
//	//int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7};
//
//	//int arr[3][5] = { {1,2},{3,4},{5} };
//
//	//��ά���������ʼ�������ǿ���ʡ�Եģ������в���ʡ��
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
//	//��������
//	int i = 0;//������
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//      //���Ƶ�����
//		for (j = 0; j < 5; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			printf("%d ", arr[i][j]);
//		}
//	}
//
//	//������������Ԫ��
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
//C99֮ǰ������Ĵ�С���ó���ָ����
//C99֮�������˱䳤����ĸ������ʹ�ñ�����ָ������Ĵ�С
//�ź����ǣ�VSĬ���ǲ�֧��C99�еı䳤�����
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
//gcc ���������������һ�±䳤����
//DevC++ ʹ�õľ��� gcc
//
//linux �������ϰ�װ��gcc��vscodeԶ�����ӵ�������
//������ʾ����������ʹ�ã�����Ҫ����
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
//		Sleep(1000);//˯��1000����
//		system("cls");//system�����ǿ⺯����ִ��ϵͳָ�cls���������̨��Ļ��Ϣ
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
//		Sleep(1000);//˯��1000����
//		system("cls");//system�����ǿ⺯����ִ��ϵͳָ�cls���������̨��Ļ��Ϣ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//���������
//	//�������в���k - 7
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ���, �±���%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}

//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//���������
//	//�������в���k - 7
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
//			printf("�ҵ��ˣ��±���:%d\n", mid);
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
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}





int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };//���������
	//�������в���k - 7
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
			printf("�ҵ��ˣ��±���:%d\n", mid);
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
		printf("�Ҳ�����\n");

	return 0;
}