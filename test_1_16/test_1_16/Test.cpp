#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//	return left + right;
//}
//
//int main()
//{
//	Add(1, 2);
//	Add(1.1, 2.2);
//	return 0;
//}

//void f()
//{
//	cout << "f()" << endl;
//}
//
//void f(int a)
//{
//	cout << "f(int a)" << endl;
//}
//
//int main()
//{
//	f();
//	f(2);
//	return 0;
//}

//void f(int a, char b)
//{
//	cout << "f(int a,char b)" << endl;
//}
//
//void f(char b, int a)
//{
//	cout << "f(char b, int a)" << endl;
//}
//
//int main()
//{
//	f(4, 'a');
//	f('b', 9);
//	return 0;
//}

//#include <time.h>
//struct A { int a[10000]; };
//void TestFunc1(A a) {}
//void TestFunc2(A& a) {}
//void TestRefAndValue()
//{
//	A a;
//	// ��ֵ��Ϊ��������
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc1(a);
//	size_t end1 = clock();
//	// ��������Ϊ��������
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc2(a);
//	size_t end2 = clock();
//	// �ֱ���������������н������ʱ��
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//}
//
//A a;
//// ֵ����
//A TestFunc1() { return a; }
//// ���÷���
//A& TestFunc2() { return a; }
//void TestReturnByRefOrValue()
//{
//	// ��ֵ��Ϊ�����ķ���ֵ����
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc1();
//	size_t end1 = clock();
//	// ��������Ϊ�����ķ���ֵ����
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 100000; ++i)
//		TestFunc2();
//	size_t end2 = clock();
//	// �������������������֮���ʱ��
//	cout << "TestFunc1 time:" << end1 - begin1 << endl;
//	cout << "TestFunc2 time:" << end2 - begin2 << endl;
//}
//
//int main()
//{
//	TestRefAndValue();
//	//TestReturnByRefOrValue();
//	return 0;
//}

//int main()
//{
//	//Ȩ������
//	const int a = 10;
//	//int& ra = a;//err
//
//	//Ȩ�ޱ���
//	const int& ra = a;
//
//	//Ȩ����С
//	int b = 20;
//	const int& rb = b;
//
//	int c = 30;
//	const double& rc = c;//��ʽ����ת��
//
//	return 0;
//}

//C++�Ƽ�
//ʹ��const��enum����곣��
//ʹ��inline����꺯��

//���ȱ��
//1.û������
//2.û�����Ͱ�ȫ���
//3.��Щ����ʹ�ø���

//дһ��ADD�꺯��
//#define ADD(x, y) ((x)+(y))
//
//int main()
//{
//	int x = 101;
//	int y = 304;
//	int ret = ADD(x, y);
//	cout << ret << endl;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	auto b = a;
//	double c = 3.14;
//	auto d = c;
//	return 0;
//}

void f(int)
{
	cout << "f(int)" << endl;
}
void f(int*)
{
	cout << "f(int*)" << endl;
}
int main()
{
	f(0);
	f(NULL);
	f(nullptr);
	return 0;
}