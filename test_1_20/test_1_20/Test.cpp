#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//class Stack
//{
//public:
//	void Init(int capacity = 4)
//	{
//		_a = (int*)malloc(sizeof(int) * capacity);
//		if (_a == nullptr)
//		{
//			perror("malloc fail");
//			return;
//		}
//		_top = 0;
//		_capacity = capacity;
//	}
//
//	void Push(int x)
//	{
//		_a[_top++] = x;
//	}
//	//...
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};
//
//int main()
//{
//	Stack st;
//	st.Init();
//	st.Push(1);
//	return 0;
//}

//class Stack
//{
//public:
//	Stack(int capacity = 4)
//	{
//		_a = (int*)malloc(sizeof(int) * capacity);
//		if (_a == nullptr)
//		{
//			perror("malloc fail");
//			return;
//		}
//		_top = 0;
//		_capacity = capacity;
//	}
//	void Push(int x)
//	{
//		//CheckCapacity();
//		_a[_top++] = x;
//	}
//	//...
//	~Stack()
//	{
//		free(_a);
//		_a = nullptr;
//		_top = _capacity = 0;
//	}
//private:
//	int* _a;
//	int _top;
//	int _capacity;
//};

//int main()
//{
//	Stack st1;//无参构造，使用缺省参数
//	//Stack st2(10);//传参构造
//	//Stack st3();//err,函数声明
//	st1.Push(1);
//	//st2.Push(2);
//	return 0;
//}

//class MyQueue
//{
//public:
//	void Push()
//	{}
//	//...
//private:
//	Stack _pushst;
//	Stack _popst;
//};
//
//int main()
//{
//	MyQueue q;
//	return 0;
//}

//class Date
//{
//public:
//	// 1.无参构造函数
//	Date()
//	{
//		_year = 1;
//		_month = 1;
//		_day = 1;
//	}
//	// 2.带参构造函数
//	Date(int year, int month, int day)
//	{
//		_year = year;
//		_month = month;
//		_day = day;
//	}
//	void Print()
//	{
//		cout << _year << "-" << _month << "-" << _day << endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1;//调用无参构造函数
//	d1.Print();
//	Date d2(2023, 12, 5);//调用带参构造函数
//	d2.Print();
//	return 0;
//}

//class Time
//{
//private:
//	int _hour = 1;
//	int _minute = 1;
//	int _second = 1;
//};
//
//class Date
//{
//private:
//	int _year = 1;
//	int _month = 1;
//	int _day = 1;
//	Time _t;
//};
//
//int main()
//{
//	Date d1;
//	Date d2(d1);
//	return 0;
//}

class Date
{
public:
	Date(int year = 1, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const Date& d)//拷贝构造函数
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};

int main()
{
	Date d1;
	d1.Print();
	Date d2(2023, 12, 5);
	d2.Print();
	Date d3(d2);//拷贝构造
	d3.Print();
	return 0;
}

//传值传参
//void Func1(Date d)
//{}
//传引用传参
//void Func2(Date& d)
//{}
//
//int main()
//{
//	Date d;
//	Func1(d);//传值调用
//	Func2(d);//传引用调用
//	return 0;
//}