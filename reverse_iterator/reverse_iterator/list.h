#pragma once
#include<iostream>
#include<assert.h>
using namespace std;

namespace my
{
	template<class T>
	struct __list_node
	{
		__list_node<T>* _prev;
		__list_node<T>* _next;
		T _data;

		__list_node(const T& x = T())
			: _prev(nullptr)
			, _next(nullptr)
			, _data(x)
		{}
	};

	template<class T, class Ref, class Ptr>
	struct __list_iterator
	{
		typedef __list_node<T> node;
		typedef __list_iterator<T, Ref, Ptr> self;
		node* _node;

		__list_iterator(node* n)
			: _node(n)
		{}

		Ref operator*()
		{
			return _node->_data;
		}

		Ptr operator->()
		{
			return &_node->_data;
		}

		self& operator++()
		{
			_node = _node->_next;
			return *this;
		}

		self operator++(int)
		{
			self tmp(*this);
			_node = _node->_next;
			return tmp;
		}

		self& operator--()
		{
			_node = _node->_prev;
			return *this;
		}

		self operator--(int)
		{
			self tmp(*this);
			_node = _node->_prev;
			return tmp;
		}

		bool operator!=(const self& s)
		{
			return _node != s._node;
		}

		bool operator==(const self& s)
		{
			return _node == s._node;
		}
	};

	template<class T>
	class list
	{
	public:
		typedef __list_node<T> node;
		typedef __list_iterator<T, T&, T*> iterator;
		typedef __list_iterator<T, const T&, const T*> const_iterator;

		typedef __reverse_iterator<iterator, T&, T*> reverse_iterator;
		typedef __reverse_iterator<iterator, const T&, const T*> const_reverse_iterator;

		reverse_iterator rbegin()
		{
			return reverse_iterator(end());
		}

		const_reverse_iterator rbegin() const
		{
			return const_reverse_iterator(end());
		}

		reverse_iterator rend()
		{
			return reverse_iterator(begin());
		}

		const_reverse_iterator rend() const
		{
			return const_reverse_iterator(begin());
		}

		iterator begin()
		{
			return iterator(_head->_next);
		}

		const_iterator begin() const
		{
			return const_iterator(_head->_next);
		}

		iterator end()
		{
			return iterator(_head);
		}

		const_iterator end() const
		{
			return const_iterator(_head);
		}

		void empty_init()
		{
			_head = new node;
			_head->_prev = _head;
			_head->_next = _head;
		}

		list()
		{
			empty_init();
		}

		template <class InputIterator>
		list(InputIterator first, InputIterator last)
		{
			empty_init();

			while (first != last)
			{
				push_back(*first);
				++first;
			}
		}

		~list()
		{
			clear();
			delete _head;
			_head = nullptr;
		}

		void clear()
		{
			iterator it = begin();
			while (it != end())
			{
				erase(it++);
			}
		}

		list(const list<T>& lt)
		{
			empty_init();

			list<T> tmp(lt.begin(), lt.end());
			swap(tmp);
		}

		list<T>& operator=(list<T> lt)
		{
			swap(lt);
			return *this;
		}

		void swap(list<T>& lt)
		{
			std::swap(_head, lt._head);
		}

		void push_front(const T& x)
		{
			insert(begin(), x);
		}

		void push_back(const T& x)
		{
			insert(end(), x);
		}

		void insert(iterator pos, const T& x)
		{
			node* cur = pos._node;
			node* prev = cur->_prev;
			node* new_node = new node(x);

			prev->_next = new_node;
			new_node->_prev = prev;
			cur->_prev = new_node;
			new_node->_next = cur;
		}

		void pop_front()
		{
			erase(begin());
		}

		void pop_back()
		{
			erase(--end());
		}

		iterator erase(iterator pos)
		{
			assert(pos != end());
			node* cur = pos._node;
			node* prev = cur->_prev;
			node* next = cur->_next;

			prev->_next = next;
			next->_prev = prev;
			delete cur;

			return iterator(next);
		}

	private:
		node* _head;
	};

	void test_list4()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);

		list<int>::reverse_iterator rit = lt.rbegin();
		while (rit != lt.rend())
		{
			cout << *rit << " ";
			++rit;
		}
		cout << endl;
	}

	void test_list3()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);
		lt.push_front(100);

		for (auto& e : lt)
		{
			cout << e << " ";
		}
		cout << endl;

		list<int>::iterator pos = lt.end();
		--pos;
		lt.insert(pos, 1000);

		for (auto& e : lt)
		{
			cout << e << " ";
		}
		cout << endl;

		lt.pop_front();
		lt.pop_back();

		for (auto& e : lt)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	struct A
	{
		int _a1;
		int _a2;

		A(int a1 = 0, int a2 = 0)
			: _a1(a1)
			, _a2(a2)
		{}
	};

	void test_list2()
	{
		list<A> lt;
		lt.push_back(A(1, 1));
		lt.push_back(A(2, 2));
		lt.push_back(A(3, 3));

		list<A>::reverse_iterator rit = lt.rbegin();
		while (rit != lt.rend())
		{
			cout << rit->_a1 << ":" << rit->_a2 << endl;
			++rit;
		}
		cout << endl;
	}

	void print_list(const list<int>& lt)
	{
		list<int>::const_iterator it = lt.begin();
		while (it != lt.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto& e : lt)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void test_list1()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);

		list<int>::iterator it = lt.begin();
		while (it != lt.end())
		{
			(*it) *= 2;
			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto& e : lt)
		{
			cout << e << " ";
		}
		cout << endl;

		print_list(lt);
	}
}