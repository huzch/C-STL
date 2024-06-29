#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//class Date
//{
//public:
//	void Print() const
//	{
//		cout << _year << "" << _month << "" << _day << endl;
//	}
//private:
//	int _year = 1;
//	int _month = 1;
//	int _day = 1;
//};
//
//void Func(const Date& d)
//{
//	d.Print();
//}
//
//int main()
//{
//	Date d1;
//	Func(d1);
//	return 0;
//}

//class Date
//{
//public:
//	Date* operator&()
//	{
//		return this;
//	}
//	const Date* operator&() const
//	{
//		return this;
//	}
//private:
//	int _year = 1;
//	int _month = 1;
//	int _day = 1;
//};
//
//int main()
//{
//	Date d1;
//	cout << &d1 << endl;
//	const Date d2;
//	cout << &d2 << endl;
//	return 0;
//}

//class Time
//{
//public:
//	Time(int hour)
//		: _hour(hour)
//	{}
//private:
//	int _hour;
//};
//
//class Date
//{
//public:
//	Date(int year, int month, int day)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//		, _t(10)
//	{}
//private:
//	int _year;
//	const int _month;//const
//	int& _day;//引用
//	Time _t;//没有默认构造函数
//};

//class Time
//{
//public:
//	explicit Time(int hour)
//		: _hour(hour)
//	{}
//	Time(int hour, int minute)
//		: _hour(hour)
//		, _minute(minute)
//	{}
//private:
//	int _hour;
//	int _minute;
//};
//
//class Date
//{
//public:
//	Date(int year, int month, int day)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d1(2023, 12, 10);
//	//Time t1(4);
//	//Time t2 = 4;
//	//const Time& t3 = 6;
//
//	Time t1(4, 5);
//	Time t2 = { 4,5 };
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//int count = 0;
//
//class A
//{
//public:
//	A(int a = 4)
//		: _a(a)
//	{
//		++count;
//	}
//	A(const A& a)
//		: _a(a._a)
//	{
//		++count;
//	}
//private:
//	int _a;
//};
//
//int main()
//{
//	A a1;
//	A a2 = 5;
//	A a3(3);
//
//	cout << count << endl;
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class A
//{
//public:
//	A(int a = 4)
//		: _a(a)
//	{
//		++count;
//	}
//	A(const A& a)
//		: _a(a._a)
//	{
//		++count;
//	}
//	static int GetCount()
//	{
//		return count;
//	}
//private:
//	int _a;
//	static int count;
//};
//
//int A::count = 0;
//
//int main()
//{
//	A a1;
//	A a2 = 5;
//	A a3(3);
//
//	cout << a1.GetCount() << endl;
//	//cout << A::count << endl;//没有private限定符时
//	cout << A::GetCount() << endl;
//	return 0;
//}

//class Date
//{
//public:
//	Date(int year = 2000, int month = 1, int day = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//	ostream& operator<<(ostream& out)
//	{
//		out << _year << "/" << _month << "/" << _day << endl;
//		return out;
//	}
//	istream& operator>>(istream& in)
//	{
//		in >> _year >> _month >> _day;
//		return in;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//int main()
//{
//	Date d;
//	d >> cin;
//	d << cout;
//	return 0;
//}

//class Date
//{
//	friend ostream& operator<<(ostream& out, const Date& d);
//	friend istream& operator>>(istream& in, Date& d);
//public:
//	Date(int year = 2000, int month = 1, int day = 1)
//		: _year(year)
//		, _month(month)
//		, _day(day)
//	{}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//
//ostream& operator<<(ostream& out, const Date& d)
//{
//	out << d._year << "/" << d._month << "/" << d._day << endl;
//	return out;
//}
//istream& operator>>(istream& in, Date& d)
//{
//	in >> d._year >> d._month >> d._day;
//	return in;
//}
//
//int main()
//{
//	Date d;
//	cin >> d;
//	cout << d;
//	return 0;
//}

class Time
{
	//声明日期类为时间类的友元类，则在日期类中就直接访问Time类中的私有成员变量
	friend class Date;
public:
	Time(int hour = 0, int minute = 0, int second = 0)
		: _hour(hour)
		, _minute(minute)
		, _second(second)
	{}
	void Print()
	{}
private:
	int _hour;
	int _minute;
	int _second;
};

class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
		: _year(year)
		, _month(month)
		, _day(day)
	{}

	void SetTimeOfDate(int hour, int minute, int second)
	{
		// 直接访问时间类私有的成员变量
		_t._hour = hour;
		_t._minute = minute;
		_t._second = second;
	}

private:
	int _year;
	int _month;
	int _day;
	Time _t;
};

int main()
{
	Time t;
	return 0;
}