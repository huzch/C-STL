#define _CRT_SECURE_NO_WARNINGS 1
#include"Date.h"

void TestDate6()
{
	Date d1;
	cin >> d1;
	cout << d1;
}

void TestDate5()
{
	Date d1(2023, 12, 8);
	Date d2(2005, 10, 7);
	cout << d1;
	cout << d1 << d2;
}

void TestDate4()
{
	Date d1(2023, 12, 8);
	Date ret1 = d1++;
	Date ret2 = ++d1;
	d1.Print();

	Date d2(2005, 10, 7);
	Date ret3 = d2--;
	Date ret4 = --d2;
	d2.Print();
}

void TestDate3()
{
	Date d1(2023, 12, 8);
	d1.Print();

	Date d2(2005, 10, 7);
	d2.Print();

	cout << d1 - d2 << endl;
	cout << d2 - d1 << endl;
}

void TestDate2()
{
	Date d1(2023, 12, 8);
	d1.Print();

	d1 -= 10000;
	d1.Print();

	Date d2 = d1 - 100;
	d2.Print();
}

void TestDate1()
{
	Date d1(2023, 12, 8);
	d1.Print();

	d1 += 10000;
	d1.Print();

	Date d2 = d1 + 100;
	d2.Print();
}

int main()
{
	TestDate6();
	return 0;
}