#include<iostream>
using namespace std;

//class A
//{
//public:
//	virtual void print(){}
//};
//
//class B :public A
//{
//public:
//	virtual void print(){}
//};
//
//typedef void(*VPTR)();
//int b = 2;
//
//int main()
//{
//	static int i = 1;
//	const char* str = "hello world";
//	int a = 1;
//	//cout << sizeof(A) << endl;
//	//cout << sizeof(B) << endl;
//	cout << &i << endl;
//	cout << &"hello world" << endl;
//	cout << &b << endl;
//	cout << &a << endl;
//	cout << &str << endl;
//
//	A a1;
//
//	cout << *(VPTR**)&a1 << endl;
//	return 0;
//}

//方案一：析构函数私有化
//class HeapOnly
//{
//public:
//	//static void Destroy(HeapOnly* ptr)
//	//{
//	//	delete ptr;
//	//}
//
//	void Destroy()
//	{
//		delete this;
//	}
//private:
//	~HeapOnly()
//	{
//		cout << "~HeapOnly()" << endl;
//	}
//};
//
//int main()
//{
//	//HeapOnly h1;
//
//	HeapOnly* ptr = new HeapOnly;
//	//delete ptr;
//	//ptr->Destroy(ptr);
//	//HeapOnly::Destroy(ptr);
//	ptr->Destroy();
//	return 0;
//}

//方案二：构造函数私有化
//class HeapOnly
//{
//public:
//	static HeapOnly* Create()
//	{
//		return new HeapOnly;
//	}
//
//	HeapOnly(const HeapOnly&) = delete;
//private:
//	HeapOnly()
//	{
//		cout << "HeapOnly()" << endl;
//	}
//};
//
//int main()
//{
//	//HeapOnly h1;
//
//	HeapOnly* ptr = HeapOnly::Create();
//	//HeapOnly copy(*ptr);
//	return 0;
//}

class StackOnly
{
public:
	static StackOnly Create()
	{
		StackOnly obj;
		return obj;
	}

	void* operator new(size_t) = delete;
private:
	StackOnly()
	{
		cout << "StackOnly()" << endl;
	}
};

int main()
{
	StackOnly obj = StackOnly::Create();
	//StackOnly* ptr = new StackOnly;
	//StackOnly* ptr = new StackOnly(obj);
	return 0;
}