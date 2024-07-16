#pragma once
#include<iostream>
#include<functional>
using namespace std;

namespace my
{
	template<class T>
	class auto_ptr
	{
	public:
		auto_ptr(T* ptr = nullptr)
			: _ptr(ptr)
		{}

		~auto_ptr()
		{
			delete _ptr;
		}

		auto_ptr(auto_ptr<T>& ap)
			: _ptr(ap._ptr)
		{
			ap._ptr = nullptr;
		}

		auto_ptr<T>& operator=(auto_ptr<T>& ap)
		{
			if (this != &ap)
			{
				delete _ptr;
				_ptr = ap._ptr;
				ap._ptr = nullptr;
			}
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

	void test_auto_ptr()
	{
		auto_ptr<int> ap1 = new int;
		auto_ptr<int> ap2 = ap1;//所有权转移

		*ap1 = 1;//悬空指针
	}

	template<class T>
	class unique_ptr
	{
	public:
		unique_ptr(T* ptr = nullptr, function<void(T*)> del = [](T* ptr) {delete ptr; })
			: _ptr(ptr)
			, _del(del)
		{}

		~unique_ptr()
		{
			_del(_ptr);
		}

		unique_ptr(const unique_ptr<T>& up) = delete;
		unique_ptr<T>& operator=(const unique_ptr<T>& up) = delete;

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
		function<void(T*)> _del;
	};

	void test_unique_ptr1()
	{
		unique_ptr<int> up1 = new int;
		//unique_ptr<int> up2 = up1;//独占所有权

		*up1 = 1;
	}

	template<class T>
	class shared_ptr
	{
	public:
		shared_ptr(T* ptr = nullptr, function<void(T*)> del = [](T* ptr) {delete ptr; })
			: _ptr(ptr)
			, _del(del)
		{}

		void release()
		{
			if (--(*_pcount) == 0)
			{
				//delete _ptr;
				_del(_ptr);
				delete _pcount;
			}
		}

		~shared_ptr()
		{
			release();
		}

		shared_ptr(const shared_ptr<T>& sp)
			: _ptr(sp._ptr)
			, _pcount(sp._pcount)
		{
			++(*_pcount);
		}

		shared_ptr<T>& operator=(const shared_ptr<T>& sp)
		{
			if (_ptr != sp._ptr)//防止同一资源的指针相互赋值
			{
				release();
				_ptr = sp._ptr;
				_pcount = sp._pcount;
				++(*_pcount);
			}
			return *this;
		}

		T& operator*()
		{
			return *_ptr;
		}

		T* operator->()
		{
			return _ptr;
		}

		T* get() const
		{
			return _ptr;
		}

		int use_count() const
		{
			return *_pcount;
		}
	private:
		T* _ptr;
		int* _pcount = new int(1);//指向当前资源的指针数
		function<void(T*)> _del;
	};

	void test_shared_ptr1()
	{
		shared_ptr<int> sp1 = new int;
		shared_ptr<int> sp2 = sp1;//共享所有权

		*sp1 = 1;

		shared_ptr<int> sp3 = new int;
	}

	void test_shared_ptr2()
	{
		shared_ptr<int> sp1 = new int;
		shared_ptr<int> sp2 = sp1;//共享所有权

		shared_ptr<int> sp3 = new int;
		sp3 = sp2;
	}

	template<class T>
	class weak_ptr
	{
	public:
		weak_ptr()
			: _ptr(nullptr)
		{}

		weak_ptr(const shared_ptr<T>& sp)
			: _ptr(sp.get())
		{}

		weak_ptr<T>& operator=(const shared_ptr<T>& sp)
		{
			_ptr = sp.get();
			return *this;
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

	void test_weak_ptr()
	{
		weak_ptr<int> wp1;
		//weak_ptr<int> wp2 = nullptr;
		//weak_ptr<int> wp3 = new int;
		weak_ptr<int> wp4 = shared_ptr<int>();
	}

	template<class T>
	struct ListNode
	{
		T _val;
		weak_ptr<ListNode<T>> _prev;
		weak_ptr<ListNode<T>> _next;

		ListNode(const T& val = T())
			: _val(val)
		{}

		~ListNode()
		{
			cout << "~ListNode()" << endl;
		}
	};

	template<class T>
	struct DelArray
	{
		void operator()(T* ptr)
		{
			delete[] ptr;
		}
	};

	void test_shared_ptr3()
	{
		shared_ptr<ListNode<int>> n1 = new ListNode<int>;
		shared_ptr<ListNode<int>> n2 = new ListNode<int>;

		cout << n1.use_count() << " " << n2.use_count() << endl;

		//循环引用
		n1->_next = n2;
		n2->_prev = n1;

		cout << n1.use_count() << " " << n2.use_count() << endl;
	}

	void test_shared_ptr4()
	{
		shared_ptr<ListNode<int>> sp1(new ListNode<int>[10], DelArray<ListNode<int>>());
		shared_ptr<ListNode<int>> sp2(new ListNode<int>[10], [](ListNode<int>* ptr) {delete[] ptr; });
		shared_ptr<FILE> sp3(fopen("Test.cpp", "r"), [](FILE* ptr) {fclose(ptr); });

		shared_ptr<ListNode<int>> sp4(new ListNode<int>);
	}

	void test_unique_ptr2()
	{
		unique_ptr<ListNode<int>> up1(new ListNode<int>[10], DelArray<ListNode<int>>());
		unique_ptr<ListNode<int>> up2(new ListNode<int>[10], [](ListNode<int>* ptr) {delete[] ptr; });
		unique_ptr<FILE> up3(fopen("Test.cpp", "r"), [](FILE* ptr) {fclose(ptr); });

		unique_ptr<ListNode<int>> up4(new ListNode<int>);
	}
}