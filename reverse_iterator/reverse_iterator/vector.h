#pragma once
#include<iostream>
#include<vector>
#include<assert.h>
using namespace std;

namespace my
{
	template<class T>
	class vector
	{
	public:
		typedef T* iterator;
		typedef const T* const_iterator;

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
			return _start;
		}

		iterator end()
		{
			return _finish;
		}

		const_iterator begin() const
		{
			return _start;
		}

		const_iterator end() const
		{
			return _finish;
		}

		vector()
		{}

		vector(size_t n, const T& val = T())
		{
			reserve(n);
			for (size_t i = 0; i < n; ++i)
			{
				_start[i] = val;
			}
			_finish = _start + n;
		}

		vector(int n, const T& val = T())
		{
			reserve(n);
			for (int i = 0; i < n; ++i)
			{
				_start[i] = val;
			}
			_finish = _start + n;
		}

		template <class InputIterator>
		vector(InputIterator first, InputIterator last)
		{
			while (first != last)
			{
				push_back(*first);
				++first;
			}
		}

		//vector(const vector<T>& x)
		//{
		//	_start = new T[x.capacity()];
		//	for (size_t i = 0; i < x.size(); ++i)
		//	{
		//		_start[i] = x._start[i];
		//	}
		//	_finish = _start + x.size();
		//	_end_of_storage = _start + x.capacity();
		//}
		vector(const vector<T>& x)
		{
			vector<T> tmp(x.begin(), x.end());
			swap(tmp);
		}

		~vector()
		{
			delete[] _start;
			_start = _finish = _end_of_storage = nullptr;
		}

		//vector<T>& operator=(const vector<T>& x)
		//{
		//	if (this != &x)
		//	{
		//		_start = new T[x.capacity()];
		//		for (size_t i = 0; i < x.size(); ++i)
		//		{
		//			_start[i] = x._start[i];
		//		}
		//		_finish = _start + x.size();
		//		_end_of_storage = _start + x.capacity();
		//	}
		//	return *this;
		//}
		vector<T>& operator=(vector<T> x)
		{
			swap(x);
			return *this;
		}

		size_t size() const
		{
			return _finish - _start;
		}

		size_t capacity() const
		{
			return _end_of_storage - _start;
		}

		void reserve(size_t n)
		{
			if (n > capacity())
			{
				T* tmp = new T[n];
				if (_start)
				{
					for (size_t i = 0; i < size(); ++i)
					{
						tmp[i] = _start[i];
					}
					delete[] _start;
				}

				size_t sz = size();
				_start = tmp;
				_finish = _start + sz;
				_end_of_storage = _start + n;
			}
		}

		void resize(size_t n, T val = T())
		{
			if (n > size())
			{
				reserve(n);
				for (size_t i = size(); i < n; ++i)
				{
					_start[i] = val;
				}
			}
			_finish = _start + n;
		}

		bool empty() const
		{
			return _start == _finish;
		}

		T& operator[](size_t pos)
		{
			assert(pos < size());
			return _start[pos];
		}

		const T& operator[](size_t pos) const
		{
			assert(pos < size());
			return _start[pos];
		}

		void push_back(const T& val)
		{
			if (_finish == _end_of_storage)
			{
				reserve(capacity() == 0 ? 4 : 2 * capacity());
			}

			*_finish = val;
			++_finish;
		}

		void pop_back()
		{
			assert(!empty());
			--_finish;
		}

		iterator insert(iterator pos, const T& val)
		{
			assert(pos >= _start && pos <= _finish);

			if (_finish == _end_of_storage)
			{
				size_t len = pos - _start;
				reserve(capacity() == 0 ? 4 : 2 * capacity());
				pos = _start + len;
			}

			iterator end = _finish - 1;
			while (end >= pos)
			{
				*(end + 1) = *end;
				--end;
			}

			*pos = val;
			++_finish;
			return pos;
		}

		iterator erase(iterator pos)
		{
			assert(pos >= _start && pos < _finish);

			iterator start = pos + 1;
			while (start < _finish)
			{
				*(start - 1) = *start;
				++start;
			}

			--_finish;
			return pos;
		}

		void swap(vector<T>& x)
		{
			std::swap(_start, x._start);
			std::swap(_finish, x._finish);
			std::swap(_end_of_storage, x._end_of_storage);
		}
	private:
		iterator _start = nullptr;
		iterator _finish = nullptr;
		iterator _end_of_storage = nullptr;
	};

	void test_vector7()
	{
		vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.push_back(5);

		vector<int>::reverse_iterator rit = v.rbegin();
		while (rit != v.rend())
		{
			cout << *rit << endl;
			++rit;
		}
		cout << endl;
	}

	class Solution
	{
	public:
		vector<vector<int>> generate(int numRows)
		{
			vector<vector<int>> vv(numRows);
			for (size_t i = 0; i < numRows; ++i)
			{
				vv[i].resize(i + 1, 1);
			}

			for (size_t i = 0; i < numRows; ++i)
			{
				for (size_t j = 1; j < i; ++j)
				{
					vv[i][j] = vv[i - 1][j] + vv[i - 1][j - 1];
				}
			}

			return vv;
		}
	};

	void test_vector6()
	{
		vector<std::string> v1(5, "hehe");
		for (auto& e : v1)
		{
			cout << e << " ";
		}
		cout << endl;

		vector<std::string> v2(v1);
		for (auto& e : v2)
		{
			cout << e << " ";
		}
		cout << endl;

		vector<vector<int>> v3 = Solution().generate(5);
		for (size_t i = 0; i < 5; ++i)
		{
			for (size_t j = 0; j <= i; ++j)
			{
				cout << v3[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;

		vector<vector<int>> v4(v3);
		for (size_t i = 0; i < 5; ++i)
		{
			for (size_t j = 0; j <= i; ++j)
			{
				cout << v4[i][j] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	void test_vector5()
	{
		vector<int> v1(6, 5);
		for (auto& e : v1)
		{
			cout << e << " ";
		}
		cout << endl;

		vector<int> v2(v1.begin() + 1, v1.end() - 1);
		for (auto& e : v2)
		{
			cout << e << " ";
		}
		cout << endl;

		std::string s1("hello world");
		vector<char> v3(s1.begin(), s1.end());
		for (auto& e : v3)
		{
			cout << e << " ";
		}
		cout << endl;

		int arr[] = { 1,2,3,4,5 };
		vector<int> v4(arr, arr + 5);
		for (auto& e : v4)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void test_vector4()
	{
		vector<int> v;
		v.push_back(10);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);
		v.push_back(5);

		//vector<int>::iterator it = find(v.begin(), v.end(), 3);
		//if (it != v.end())
		//{
		//	v.erase(it);
		//}

		vector<int>::iterator it = v.begin();
		while (it != v.end())
		{
			if (*it % 2 == 0)
			{
				it = v.erase(it);
			}
			else
			{
				++it;
			}
		}

		for (auto& e : v)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void test_vector3()
	{
		vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);

		v.insert(v.begin(), 100);

		for (auto& e : v)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void test_vector2()
	{
		vector<int> v;
		v.push_back(1);
		v.push_back(2);

		v.resize(7);

		v.pop_back();
		v.pop_back();
		v.pop_back();

		for (auto& e : v)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void Print(const vector<int>& v)
	{
		for (size_t i = 0; i < v.size(); ++i)
		{
			cout << v[i] << " ";
		}
		cout << endl;

		vector<int>::const_iterator it = v.begin();
		while (it != v.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto& e : v)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void test_vector1()
	{
		vector<int> v;
		v.push_back(1);
		v.push_back(2);
		v.push_back(3);
		v.push_back(4);

		Print(v);

		v.push_back(5);
		v.push_back(6);
		v.push_back(7);
		v.push_back(8);

		for (size_t i = 0; i < v.size(); ++i)
		{
			cout << v[i] << " ";
		}
		cout << endl;

		vector<int>::iterator it = v.begin();
		while (it != v.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto& e : v)
		{
			cout << e << " ";
		}
		cout << endl;
	}
}