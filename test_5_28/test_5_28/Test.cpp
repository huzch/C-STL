#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<functional>
using namespace std;

struct Goods
{
	string _name;
	double _price;
	int _evaluate;

	Goods(const char* str, double price, int evaluate)
		: _name(str)
		, _price(price)
		, _evaluate(evaluate)
	{}
};

struct ComparePriceLess
{
	bool operator()(const Goods& gl, const Goods& gr)
	{
		return gl._price < gr._price;
	}
};

struct ComparePriceGreater
{
	bool operator()(const Goods& gl, const Goods& gr)
	{
		return gl._price > gr._price;
	}
};

//int main()
//{
//	vector<Goods> v = { { "ƻ��", 2.1, 5 }, { "�㽶", 3, 4 }, { "����", 2.2,3 }, { "����", 1.5, 4 } };
//	sort(v.begin(), v.end(), ComparePriceLess());
//	sort(v.begin(), v.end(), ComparePriceGreater());
//
//	//sort(v.begin(), v.end(), [](const Goods& g1, const Goods& g2)->bool {return g1._price < g2._price; });
//	sort(v.begin(), v.end(), [](const Goods& g1, const Goods& g2) {return g1._price < g2._price; });
//	sort(v.begin(), v.end(), [](const Goods& g1, const Goods& g2) {return g1._price > g2._price; });
//	return 0;
//}

//int main()
//{
//	//�����û���lambda��������������
//	auto f1 = [](int x) {cout << x << endl; };
//	f1(1);
//	cout << typeid(f1).name() << endl;
//
//	auto f2 = [](int x) {cout << x << endl; };
//	f2(2);
//	cout << typeid(f2).name() << endl;
//	return 0;
//}

//int main()
//{
//	int x = 1, y = 2;
//	//auto f1 = [x, y] {cout << x << " " << y << endl; };
//	//f1();
//
//	//auto f2 = [=] {cout << x << " " << y << endl; };
//	//f2();
//
//	auto f1 = [&x, &y] {cout << x << " " << y << endl; };
//
//	auto f2 = [&] {cout << x << " " << y << endl; };
//	return 0;
//}
//
//class A
//{
//public:
//	void print()
//	{
//		auto f3 = [this] {cout << _a1 << " " << _a2 << endl; };
//		f3();
//	}
//private:
//	int _a1, _a2;
//};

//class Rate
//{
//public:
//	Rate(double rate) : _rate(rate)
//	{}
//	double operator()(double money, int year)
//	{
//		return money * _rate * year;
//	}
//private:
//	double _rate;
//};
//
//int main()
//{
//	// ��������
//	double rate = 0.49;
//	Rate r1(rate);
//	r1(10000, 2);
//	// lambda
//	auto r2 = [=](double monty, int year)->double 
//		{return monty * rate * year;};
//	r2(10000, 2);
//
//	return 0;
//}

//void Swap(int& x, int& y)
//{
//	int tmp = x;
//	x = y;
//	y = tmp;
//}
//
//struct SwapFunctor
//{
//	void operator()(int& x, int& y)
//	{
//		int tmp = x;
//		x = y;
//		y = tmp;
//	}
//};
//
//int main()
//{
//	//����ָ��
//	function<void(int&, int&)> f1 = Swap;
//	cout << typeid(f1).name() << endl;
//	//��������
//	function<void(int&, int&)> f2 = SwapFunctor();
//	cout << typeid(f2).name() << endl;
//	//lambda���ʽ
//	function<void(int&, int&)> f3 = [](int& x, int& y)
//		{
//			int tmp = x;
//			x = y;
//			y = tmp;
//		};
//	cout << typeid(f3).name() << endl;
//	return 0;
//}

//class Plus
//{
//public:
//	static int plusi(int x, int y)
//	{
//		return x + y;
//	}
//
//	double plusd(double x, double y)
//	{
//		return x + y;
//	}
//};
//
//int main()
//{
//	//��ľ�̬��Ա����
//	function<int(int, int)> f1 = Plus::plusi;
//	//��ĳ�Ա��������& + ����
//	function<double(Plus*, double, double)> f2 = &Plus::plusd;
//	Plus p;
//	f2(&p, 1.1, 2.2);
//
//	function<double(Plus, double, double)> f3 = &Plus::plusd;
//	f3(Plus(), 1.1, 2.2);
//	return 0;
//}

//int Sub(int x, int y)
//{
//	return x - y;
//}
//
//int main()
//{
//	//function<int()> f1 = bind(Sub, 20, 10);
//	//f1();
//	//auto f2 = bind(Sub, 20, 10);
//	//f2();
//
//	function<int(int, int)> f1 = Sub;
//	cout << f1(10, 5) << endl;
//	//��ֵ����������������
//	function<int()> f2 = bind(Sub, 20, 10);
//	cout << f2() << endl;
//	//��ռλ��������������˳��
//	function<int(int, int)> f3 = bind(Sub, placeholders::_2, placeholders::_1);
//	cout << f3(10, 5) << endl;
//	//ͬʱ��ֵ��ռλ��
//	function<int(int)> f4 = bind(Sub, 20, placeholders::_1);
//	cout << f4(10) << endl;
//	return 0;
//}

class Plus
{
public:
	static int plusi(int x, int y)
	{
		return x + y;
	}

	double plusd(double x, double y)
	{
		return x + y;
	}
};

int main()
{
	//��ľ�̬��Ա����
	function<int(int, int)> f1 = Plus::plusi;
	//��ĳ�Ա��������& + ����
	function<double(Plus*, double, double)> f2 = &Plus::plusd;
	Plus p;
	f2(&p, 1.1, 2.2);

	//function<double(Plus, double, double)> f3 = &Plus::plusd;
	//f3(Plus(), 1.1, 2.2);

	function<double(double, double)> f3 = bind(&Plus::plusd, Plus(), placeholders::_1, placeholders::_2);
	f3(1.1, 2.2);
	return 0;
}