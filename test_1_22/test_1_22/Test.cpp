#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

typedef int DataType;
class Stack
{
public:
	Stack(int capacity = 4)
	{
		_a = (DataType*)malloc(capacity * sizeof(DataType));
		if (_a == nullptr)
		{
			perror("malloc fail");
			exit(-1);
		}
		_top = 0;
		_capacity = capacity;
	}
	Stack(const Stack& st)//Éî¿½±´
	{
		_a = (DataType*)malloc(st._capacity * sizeof(DataType));
		if (_a == nullptr)
		{
			perror("malloc fail");
			exit(-1);
		}
		_top = st._top;
		_capacity = st._capacity;
	}
	~Stack()
	{
		free(_a);
		_a = nullptr;
		_top = _capacity = 0;
	}
private:
	DataType* _a;
	int _top;
	int _capacity;
};

class MyQueue
{
private:
	Stack _pushSt;
	Stack _popSt;
};

//int main()
//{
//	MyQueue q1;
//	MyQueue q2(q1);
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

	void Print()
	{
		cout << _year << "-" << _month << "-" << _day << endl;
	}

	bool operator==(const Date& d)
	{
		return _year == d._year
			&& _month == d._month
			&& _day == d._day;
	}

	bool operator<(const Date& d)
	{
		//if (_year < d._year)
		//{
		//	return true;
		//}
		//else if (_year == d._year && _month < d._month)
		//{
		//	return true;
		//}
		//else if (_year == d._year && _month == d._month && _day < d._day)
		//{
		//	return true;
		//}
		//else
		//{
		//	return false;
		//}
		return (_year < d._year)
			|| (_year == d._year && _month < d._month)
			|| (_year == d._year && _month == d._month && _day < d._day);
	}

	bool operator<=(const Date& d)
	{
		return (*this == d) || (*this < d);
	}

	bool operator>(const Date& d)
	{
		return !(*this <= d);
	}

	bool operator>=(const Date& d)
	{
		return !(*this < d);
	}

	bool operator!=(const Date& d)
	{
		return !(*this == d);
	}

	Date& operator=(const Date& d)
	{
		if (this != &d)
		{
			_year = d._year;
			_month = d._month;
			_day = d._day;
		}

		return *this;
	}

private:
	int _year;
	int _month;
	int _day;
};


int main()
{
	Date d1(2022, 10, 24);
	Date d2(2023, 5, 3);

	cout << (d1 < d2) << endl;

	//d1.operator==(d2);
	//d1 == d2;
	//operator==(d1, d2);
	//d1 == d2;
	//cout << (d1 == d2) << endl;
	return 0;
}