#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using std::cout;
using std::endl;

class A
{
public:
	A(int a = 1)
		: _a(a)
	{
		cout << "A(int)" << endl;
	}
	A(const A& a)
		:_a(a._a)
	{
		cout << "A(const A&)" << endl;
	}
	A& operator=(const A& a)
	{
		cout << "A& operator=(const A&)" << endl;
		if (this != &a)
		{
			_a = a._a;
		}
		return *this;
	}
	~A()
	{
		cout << "~A()" << endl;
	}
private:
	int _a;
};

void f1(A a)
{}

void f2(const A& a)
{}

//int main()
//{
//	//A a1 = 1;//����+�������졪�����Ż�Ϊ����
//	//f1(a1);//���Ż���ֻ����ͬһ���ʽ�����Ż�
//
//	//f1(2);//����+�������졪�����Ż�Ϊ����
//	//f1(A(3));//����+�������졪�����Ż�Ϊ����
//
//
//	A a1 = 1;//����+�������졪�����Ż�Ϊ����
//	f2(a1);//���Ż�
//	f2(2);//���Ż�
//	f2(A(3));//���Ż�
//	return 0;
//}

A f3()
{
	A a;
	return a;
}

A f4()
{
	return A();
}

//int main()
//{
//	f3();//���Ż�����Ϊ�ڲ�ͬ���ʽ
//	A a1 = f3();//����+���ο������졪�����Ż�Ϊ����+��������
//	cout << "-----------------" << endl;
//	A a3;
//	a3 = f3();
//
//	
//	//f4();//����+�������졪�����Ż�Ϊ����
//	//A a2 = f4();//����+���ο������졪�����Ż�Ϊ����
//	return 0;
//}

//int main()
//{
//	//int* a = (int*)malloc(10*sizeof(int));
//	//if (a == nullptr)
//	//{
//	//	perror("malloc fail");
//	//	return 1;
//	//}
//	//free(a);
//	//a = nullptr;
//
//	//int* p1 = new int(1);
//	//int* p2 = new int[10] {1, 2, 3, 4, 5};
//	//delete p1;
//	//delete[] p2;
//
//	A* p1 = new A;
//	A* p2 = (A*)malloc(sizeof(A));
//
//	A* p3 = new A[10];
//	A* p4 = (A*)malloc(10 * sizeof(A));
//	return 0;
//}

template<class T>
void Swap(T& x, T& y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

//int main()
//{
//	int a = 1, b = 2;
//	Swap(a, b);
//	return 0;
//}

#include<string>
using namespace std;

int main()
{
	//string s1("hello world");
	//s1.reserve(100);
	//cout << s1.size() << endl;
	//cout << s1.capacity() << endl;

	//string s2("hello world");
	//s2.resize(100);
	//cout << s2.size() << endl;
	//cout << s2.capacity() << endl;

	string s = "hello world i love you";
	int count = 0;
	for (auto ch : s)
	{
		if (ch == ' ')
		{
			count++;
		}
	}
	string newStr;
	newStr.reserve(s.size() + 2 * count);

	for (auto ch : s)
	{
		if (ch != ' ')
		{
			newStr += ch;
		}
		else
		{
			newStr += "%%%";
		}
	}
	cout << newStr << endl;
	return 0;
}