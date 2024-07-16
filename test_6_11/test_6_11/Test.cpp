#define _CRT_SECURE_NO_WARNINGS 1
#include"SmartPtr.h"


template<class T>
class SmartPtr
{
public:
	SmartPtr(T* ptr = nullptr)
		: _ptr(ptr)
	{}

	~SmartPtr()
	{
		delete _ptr;
	}

	T& operator*()
	{
		return *_ptr;
	}

	T* operator->()
	{
		return _ptr;
	}
private:
	T* _ptr;
};

void TestSmartPtr1()
{
	SmartPtr<int> sp1 = new int;
	*sp1 = 2;

	SmartPtr <pair<int, string>> sp2 = new pair<int, string>(1, "Black Myth:");
	sp2->first += 2;
	sp2->second += "WuKong";
	cout << sp2->first << ":" << sp2->second << endl;
}

void TestSmartPtr2()
{
	SmartPtr<int> sp1 = new int;
	SmartPtr<int> sp2 = sp1;
	//1.浅拷贝，导致内存重复释放
	//2.深拷贝，指针意义不对
}

int main()
{
	//TestSmartPtr2();
	//my::test_auto_ptr();
	my::test_unique_ptr2();
	//my::test_shared_ptr4();
	return 0;
}
