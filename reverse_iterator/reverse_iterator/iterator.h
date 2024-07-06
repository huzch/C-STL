#pragma once
#include<iostream>
using namespace std;

namespace my
{
	template<class Iterator, class Ref, class Ptr>
	struct __reverse_iterator
	{
		typedef __reverse_iterator self;
		Iterator _cur;

		__reverse_iterator(Iterator it)
			: _cur(it)
		{}

		Ptr operator->()
		{
			//Iterator tmp = _cur;
			//--tmp;
			//return tmp.operator->();
			return &(operator*());
		}

		Ref operator*()
		{
			Iterator tmp = _cur;
			return *--tmp;
		}

		self& operator++()
		{
			--_cur;
			return *this;
		}

		self operator++(int)
		{
			Iterator tmp = _cur;
			--_cur;
			return tmp;
		}

		self& operator--()
		{
			++_cur;
			return *this;
		}

		self operator--(int)
		{
			Iterator tmp = _cur;
			++_cur;
			return tmp;
		}

		bool operator!=(const self& s)
		{
			return _cur != s._cur;
		}

		bool operator==(const self& s)
		{
			return _cur == s._cur;
		}
	};
}