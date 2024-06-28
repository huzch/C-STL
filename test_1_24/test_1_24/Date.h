#pragma once
#include<iostream>
using namespace std;

class Date
{
	friend ostream& operator<<(ostream& out, const Date& d)
	{
		out << d._year << "/" << d._month << "/" << d._day << endl;
		return out;
	}
	friend istream& operator>>(istream& in, Date& d)
	{
		in >> d._year >> d._month >> d._day;
		return in;
	}

public:
	Date(int year = 1, int month = 1, int day = 1);
	void Print();
	bool operator==(const Date& d);
	bool operator!=(const Date& d);

	bool operator<(const Date& d);
	bool operator<=(const Date& d);
	bool operator>(const Date& d);
	bool operator>=(const Date& d);

	Date& operator=(const Date& d);

	Date& operator+=(int day);
	Date operator+(int day);
	Date& operator-=(int day);
	Date operator-(int day);

	int operator-(const Date& d);

	Date& operator++();
	Date operator++(int);
	Date& operator--();
	Date operator--(int);

private:
	int _year;
	int _month;
	int _day;
};
