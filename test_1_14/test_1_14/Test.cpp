#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//
//int rand = 9;
//
//int main()
//{
//	int rand = 2;
//	printf("%d", ::rand);
//	return 0;
//}

//#include"List.h"
//#include"Queue.h"
//using namespace lisi;
//
//int main()
//{
//	struct Queue q;
//	return 0;
//}

//#include<iostream>
//
//int main()
//{
//	std::cout << "hello world" << std::endl;
//	return 0;
//}

//#include<iostream>
//using std::cout;
//using std::endl;
//
//int main()
//{
//	cout << "hello world" << endl;
//	return 0;
//}

#include<iostream>
using namespace std;

//int main()
//{
//	cout << "hello world" << endl;
//	return 0;
//}

//int main()
//{
//	int arr[5];
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << arr[i] << ' ';
//	}
//	return 0;
//}

//void Fuc(int a = 5)
//{
//	cout << a << endl;
//}
//
//int main()
//{
//	Fuc(1);//����ʱ��ʹ��ָ��ʵ��
//	Fuc();//û�д���ʱ��ʹ�ò�����Ĭ��ֵ
//	return 0;
//}

//void Fuc(int a = 5, int b = 6, int c = 7)
//{
//	cout << a << endl;
//	cout << b << endl;
//	cout << c << endl;
//}

void Fuc(int a, int b = 6, int c = 7)
{
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
}

int main()
{
	Fuc(1, 2, 3);
	Fuc(1, 2);
	Fuc(1);

	//����д��
	//Fuc(,2,)
	//Fuc(1,,3)
	//����
	return 0;
}