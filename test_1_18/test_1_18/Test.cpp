#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

class Date
{
public:
	void Init(int year, int month, int day)
	{
		_year = year;
		_month = month;
		_day = day;
	}

	void Print()
	{
		cout << typeid(this).name() << endl;
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	void Func()
	{
		cout << this << endl;
		cout << "Func()" << endl;
	}

private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	//Date d1, d2;
	//d1.Init(2023, 12, 3);
	//d1.print();
	//d2.Init(2022, 1, 3);
	//d2.print();

	Date* ptr = nullptr;
	//ptr->Init(2023, 12, 3);
	ptr->Func();

	return 0;
}

//// 类中既有成员变量，又有成员函数
//class A1
//{
//public:
//	void f1() {}
//private:
//	int _a;
//};
//
//// 类中仅有成员函数
//class A2
//{
//public:
//	void f2() {}
//};
//
//// 类中什么都没有---空类
//class A3
//{};
//
//int main()
//{
//	cout << sizeof(A1) << endl;
//	cout << sizeof(A2) << endl;
//	cout << sizeof(A3) << endl;
//
//	return 0;
//}