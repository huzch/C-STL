#pragma once
#include<iostream>
#include<assert.h>
using namespace std;

namespace my
{
	class string
	{
	public:
		typedef char* iterator;
		typedef const char* const_iterator;
		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size;
		}

		const_iterator begin() const
		{
			return _str;
		}

		const_iterator end() const
		{
			return _str + _size;
		}

		string(const char* str = "")
			:_size(strlen(str))
		{
			_capacity = _size == 0 ? 3 : _size;
			_str = new char[_capacity + 1];
			strcpy(_str, str);
		}

		string(const string& s)
			:_size(s._size)
			, _capacity(s._capacity)
		{
			_str = new char[_capacity + 1];
			strcpy(_str, s._str);
		}

		string& operator=(const string& s)
		{
			if (this != &s)
			{
				char* tmp = new char[s._capacity + 1];
				delete[] _str;
				_str = tmp;
				strcpy(_str, s._str);
				_size = s._size;
				_capacity = s._capacity;
			}

			return *this;
		}

		~string()
		{
			delete[] _str;
			_str = nullptr;
			_size = _capacity = 0;
		}

		const char* c_str() const
		{
			return _str;
		}

		char& operator[](size_t pos)
		{
			assert(pos < _size);
			return _str[pos];
		}

		const char& operator[](size_t pos) const
		{
			assert(pos < _size);
			return _str[pos];
		}

		size_t size() const
		{
			return _size;
		}

		size_t capacity() const
		{
			return _capacity;
		}

		bool operator==(const string& s) const
		{
			return strcmp(_str, s._str) == 0;
		}

		bool operator!=(const string& s) const
		{
			return !(*this == s);
		}

		bool operator>(const string& s) const
		{
			return strcmp(_str, s._str) > 0;
		}

		bool operator>=(const string& s) const
		{
			return *this > s || *this == s;
		}

		bool operator<(const string& s) const
		{
			return !(*this >= s);
		}

		bool operator<=(const string& s) const
		{
			return !(*this > s);
		}

		void resize(size_t n, char ch = '\0')
		{
			if (n > _size)
			{
				reserve(n);
				memset(_str + _size, ch, n - _size);
			}
			_size = n;
			_str[_size] = '\0';
		}

		void reserve(size_t n)
		{
			if (n > _capacity)
			{
				char* tmp = new char[n + 1];
				strcpy(tmp, _str);
				delete[] _str;
				_str = tmp;
				_capacity = n;
			}
		}

		void push_back(char ch)
		{
			//if (_size + 1 > _capacity)
			//{
			//	reserve(_capacity * 2);
			//}

			//_str[_size] = ch;
			//++_size;
			//_str[_size] = '\0';
			insert(_size, ch);
		}

		void append(const char* str)
		{
			//size_t len = strlen(str);
			//if (_size + len > _capacity)
			//{
			//	reserve(_size + len);
			//}

			//strcpy(_str + _size, str);
			//_size += len;
			insert(_size, str);
		}

		string& operator+=(char ch)
		{
			push_back(ch);
			return *this;
		}

		string& operator+=(const char* str)
		{
			append(str);
			return *this;
		}

		string& insert(size_t pos, char ch)
		{
			assert(pos <= _size);

			if (_size + 1 > _capacity)
			{
				reserve(_capacity * 2);
			}

			//size_t end = _size + 1;
			//while (end > pos)
			//{
			//	_str[end] = _str[end - 1];
			//	--end;
			//}
			memmove(_str + pos + 1, _str + pos, _size + 1 - pos);

			_str[pos] = ch;
			++_size;

			return *this;
		}

		string& insert(size_t pos, const char* str)
		{
			assert(pos <= _size);

			size_t len = strlen(str);
			if (_size + len > _capacity)
			{
				reserve(_size + len);
			}

			//size_t end = _size + 1;
			//while (end > pos)
			//{
			//	_str[end + len - 1] = _str[end - 1];
			//	--end;
			//}
			memmove(_str + pos + len, _str + pos, _size + 1 - pos);

			strncpy(_str + pos, str, len);
			_size += len;

			return *this;
		}

		string& erase(size_t pos, size_t len = npos)
		{
			assert(pos < _size);

			if (len == npos || pos + len >= _size)
			{
				_size = pos;
				_str[_size] = '\0';
			}
			else
			{
				strcpy(_str + pos, _str + pos + len);
				_size -= len;
			}

			return *this;
		}

		void swap(string& s)
		{
			std::swap(_str, s._str);
			std::swap(_size, s._size);
			std::swap(_capacity, s._capacity);
		}

		size_t find(char ch, size_t pos = 0)
		{
			assert(pos < _size);

			for (size_t i = pos; i < _size; ++i)
			{
				if (_str[i] == ch)
				{
					return i;
				}
			}
			return npos;
		}

		size_t find(const char* str, size_t pos = 0)
		{
			assert(pos < _size);

			char* p = strstr(_str, str);
			if (p == nullptr)
			{
				return npos;
			}
			return p - _str;
		}

		void clear()
		{
			_str[0] = '\0';
			_size = 0;
		}

	private:
		char* _str;
		size_t _size;
		size_t _capacity;
		static size_t npos;
	};

	size_t string::npos = -1;

	ostream& operator<<(ostream& out, const string& s)
	{
		for (auto& ch : s)
		{
			out << ch;
		}
		return out;
	}

	istream& operator>>(istream& in, string& s)
	{
		s.clear();

		char ch = in.get();
		size_t i = 0;
		char buf[128] = { 0 };
		while (ch != ' ' && ch != '\n')
		{
			buf[i++] = ch;
			if (i == 127)
			{
				s += buf;
				i = 0;
			}
			s += ch;
			ch = in.get();
		}

		if (i != 0)
		{
			s += buf;
		}
		return in;
	}

	void test_string1()
	{
		string s1;
		string s2 = "hello world";
		cout << s1.c_str() << endl;
		cout << s2.c_str() << endl;

		s2[1]++;
		cout << s1.c_str() << endl;
		cout << s2.c_str() << endl;
	}

	void test_string2()
	{
		string s1 = "hello world";
		string s2 = s1;
		cout << s1.c_str() << endl;
		cout << s2.c_str() << endl;

		s2[0]++;
		cout << s1.c_str() << endl;
		cout << s2.c_str() << endl;

		string s3 = "I love C++aaaaaa";
		s1 = s3;
		cout << s1.c_str() << endl;
		cout << s3.c_str() << endl;

		s1 = s1;
		cout << s1.c_str() << endl;
		cout << s3.c_str() << endl;
	}

	void Print(const string& s)
	{
		for (int i = 0; i < s.size(); ++i)
		{
			cout << s[i] << " ";
		}
		cout << endl;

		string::const_iterator it = s.begin();
		while (it != s.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto& ch : s)
		{
			cout << ch << " ";
		}
		cout << endl;
	}

	void test_string3()
	{
		string s1 = "hello world";

		for (int i = 0; i < s1.size(); ++i)
		{
			s1[i]++;
		}

		for (int i = 0; i < s1.size(); ++i)
		{
			cout << s1[i] << " ";
		}
		cout << endl;

		Print(s1);

		string::iterator it = s1.begin();
		while (it != s1.end())
		{
			(*it)--;
			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto& ch : s1)
		{
			cout << ch << " ";
		}
		cout << endl;
	}

	void test_string4()
	{
		string s1 = "hello world";
		string s2 = s1;
		string s3 = "i love C++";

		cout << (s1 == s2) << endl;
		cout << (s1 > s3) << endl;
	}

	void test_string5()
	{
		string s1 = "hello world";

		s1 += '!';
		s1 += "aaaaaaaaaaaaaaaaaaaa";
	}

	void test_string6()
	{
		string s1 = "hello world";

		s1.resize(20, 'x');
		cout << s1.c_str() << endl;

		s1.resize(30, 'y');
		cout << s1.c_str() << endl;

		s1.resize(20, 'z');
		cout << s1.c_str() << endl;
	}

	void test_string7()
	{
		string s1 = "hello world";

		s1.insert(0, 'x');
		cout << s1.c_str() << endl;

		s1.insert(0, "love");
		cout << s1.c_str() << endl;

		s1.erase(0, 5);
		cout << s1.c_str() << endl;

		s1.erase(1, 10);
		cout << s1.c_str() << endl;
	}

	void test_string8()
	{
		string s1 = "hello world";
		cout << s1 << endl;

		string s2;
		cin >> s2;
		cout << s2 << endl;

		cin >> s2;
		cout << s2 << endl;
	}
}