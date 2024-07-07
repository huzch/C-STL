#define _CRT_SECURE_NO_WARNINGS 1
#include<array>
#include<iostream>
using namespace std;

//class A {
//public:
//	A() {
//		cout << "A created." << endl;
//	}
//	void print(int x);
//};
//
//void A::print(int x) {
//	cout << x << endl;
//}
//
//int main() {
//	A a;
//	a.print(5);
//	return 0;
//}

//class A {
//public:
//	A() {
//		cout << "A created." << endl;
//	}
//};
//
//int main() {
//	A a(1);
//	return 0;
//}

//auto x1 = 5, x2 = 5.0, x3 = 'r';

//constexpr int sqr1(int arg) {
//	return arg * arg;
//}
//const int sqr2(int arg) {
//	return arg * arg;
//}
//int main()
//{
//	array<int, sqr1(10)> a;
//	array<int, sqr2(10)> b;
//	return 0;
//}

//const int a = 5 + 4;
//constexpr int b = 5 + 4;

//void dis_1(const int x) {
//    array <int, x> myarr{ 1,2,3,4,5 };
//    cout << myarr[1] << endl;
//}
//void dis_2() {
//    const int x = 5;
//    array <int, x> myarr{ 1,2,3,4,5 };
//    cout << myarr[1] << endl;
//}
//int main()
//{
//    dis_1(5);
//    dis_2();
//}

//class Car
//{
//public:
//	virtual void Drive() final {}
//};
//class Benz :public Car
//{
//public:
//	virtual void Drive() { cout << "Benz-ÊæÊÊ" << endl; }
//};

//class Car
//{
//public:
//	virtual void Drive() = 0;
//};
//
//class Benz :public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "Benz-ÊæÊÊ" << endl;
//	}
//};
//
//class BMW :public Car
//{
//public:
//	virtual void Drive()
//	{
//		cout << "BMW-²Ù¿Ø" << endl;
//	}
//};
//
//void Test()
//{
//	Car* pBenz = new Benz;
//	pBenz->Drive();
//	Car* pBMW = new BMW;
//	pBMW->Drive();
//}

//class Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Func1()" << endl;
//	}
//private:
//	int _b = 1;
//};
//
//int main()
//{
//	Base b;
//	return 0;
//}

//class Car
//{
//public:
//	virtual void Drive() {}
//};
//
//class Benz :public Car
//{
//public:
//	virtual void Drive() override { cout << "Benz-ÊæÊÊ" << endl; }
//};

class A
{
public:
	virtual void func1()
	{}
	int _a;
};

class B :virtual public A
{
public:
	virtual void func1()
	{}
	virtual void func2()
	{}
	int _b;
};

class C :virtual public A
{
public:
	virtual void func1()
	{}
	virtual void func3()
	{}
	int _c;
};

class D :public B, public C
{
public:
	virtual void func1()
	{}
	virtual void func4()
	{}
	int _d;
};

int main()
{
	D d;
	d._b = 1;
	d._c = 2;
	d._d = 3;
	d._a = 4;
	return 0;
}

//class Base
//{
//public:
//	virtual void func1()
//	{
//		cout << "Base:func1()" << endl;
//	}
//private:
//	int _b;
//};
//
//class Base1 :virtual public Base
//{
//public:
//	virtual void func1()
//	{
//		cout << "Base1:func1()" << endl;
//	}
//
//	virtual void func2()
//	{
//		cout << "Base1:func2()" << endl;
//	}
//private:
//	int _b1;
//};
//
//class Base2 :virtual public Base
//{
//public:
//	virtual void func1()
//	{
//		cout << "Base2:func1()" << endl;
//	}
//
//	virtual void func2()
//	{
//		cout << "Base2:func2()" << endl;
//	}
//private:
//	int _b2;
//};
//
//class Derive :public Base1, public Base2
//{
//public:
//	virtual void func1()
//	{
//		cout << "Derive::func1()" << endl;
//	}
//
//	virtual void func3()
//	{
//		cout << "Derive::func3()" << endl;
//	}
//private:
//	int _d;
//};

//int main()
//{
//	//Derive d;
//	//Base1* ptr1 = &d;
//	//Base2* ptr2 = &d;
//
//	//ptr1->func1();
//	//ptr2->func1();
//	return 0;
//}

//class Base1 { public:int _b1; };
//
//class Base2 { public:int _b2; };
//
//class Derive : public Base1, public Base2 { public: int _d; };
//
//int main()
//{
//	Derive d;
//	Base1* p1 = &d;
//	Base2* p2 = &d;
//	Derive* p3 = &d;
//	return 0;
//}

//class Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Base::Func1()" << endl;
//	}
//	//virtual void Func2()
//	//{
//	//	cout << "Base::Func2()" << endl;
//	//}
//	//void Func3()
//	//{
//	//	cout << "Base::Func3()" << endl;
//	//}
//private:
//	int _b = 1;
//};
//
//class Derive : public Base
//{
//public:
//	virtual void Func1()
//	{
//		cout << "Derive::Func1()" << endl;
//	}
//
//	virtual void Func4()
//	{
//		cout << "Derive::Func4()" << endl;
//	}
//private:
//	int _d = 2;
//};
//
//typedef void(*VFT_PTR)();
//
//void PrintVFTable(VFT_PTR* table)
//{
//	for (int i = 0; table[i] != nullptr; ++i)
//	{
//		printf("[%d]: %p-> ", i, table[i]);
//		VFT_PTR f = table[i];
//		f();
//	}
//	cout << endl;
//}
//
//int main()
//{
//	Base b;
//	Base1 b1;
//	Base2 b2;
//
//	Derive d;
//	Base1* p1 = &d;
//	Base2* p2 = &d;
//	Base* p = &d;
//
//	PrintVFTable(*(VFT_PTR**)&b1);
//	PrintVFTable(*(VFT_PTR**)&b2);
//	PrintVFTable(*(VFT_PTR**)p1);
//	PrintVFTable(*(VFT_PTR**)p2);
//
//	return 0;
//}

//class A
//{
//public:
//	virtual void func(int val = 1) { std::cout << "A->" << val << std::endl; }
//	virtual void test() { func(); }
//};
//
//class B : public A
//{
//public:
//	void func(int val = 0) { std::cout << "B->" << val << std::endl; }
//};
//
//int main(int argc, char* argv[])
//{
//	B* p = new B;
//	p->test();
//	return 0;
//}

//class A
//{
//public:
//	void print()
//	{
//		cout << "A" << endl;
//	}
//};
//
//class B :public A
//{
//public:
//};
//
//int main()
//{
//	B* p = new B;
//	p->print();
//	return 0;
//}