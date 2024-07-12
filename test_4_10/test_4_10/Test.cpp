#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<list>
#include<map>
using namespace std;

struct Point
{
	int _x, _y;
};

class Date
{
	int _year, _month, _day;
public:
	Date(int year, int month, int day)
		: _year(year)
		, _month(month)
		, _day(day)
	{}
};

//һ�нԿ����б��ʼ��
//int main()
//{
//	//�������� ���� ��ʼ��
//	int i = 0;
//	int j = { 0 };
//	int k{ 0 };
//
//	int arr1[] = { 1,2,3 };
//	int arr2[5]{ 0 };
//
//	int* ptr1 = new int[5] {0};
//
//	//�ṹ����� ���� ����ת��
//	Point p1 = { 3,5 };
//	Point p2{ 4,6 };
//
//	Date d1(2024, 4, 10);
//	Date d2 = { 2024,5,1 };
//	Date d3{ 2024,6,1 };
//
//	Date* ptr2 = new Date[3]{ d1,d2,d3 };
//	Date* ptr3 = new Date[3]{ {2024,1,1},{2024,2,2},{2024,3,3} };
//
//	//���� ���� initializer_list
//	vector<int> v1 = { 1,2,3 };
//	vector<int> v2 = { 1,2,3,4,5 };
//
//	auto il = { 1,2,3,4,5 };
//	cout << typeid(il).name() << endl;
//
//	initializer_list<int>::iterator it = il.begin();
//	while (it != il.end())
//	{
//		cout << *it << " ";
//		++it;
//	}
//	cout << endl;
//
//	for (auto e : il)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	map<string, string> dict = { {"����","sort"},{"����","reverse"} };
//	for (auto& kv : dict)
//	{
//		cout << kv.first << ":" << kv.second << endl;
//	}
//	cout << endl;
//
//	return 0;
//}


//int main()
//{
//	int x = 1;
//	double y = 2.0;
//	decltype(x) k;
//
//	auto ret = x * y;
//	vector<decltype(ret)> v;
//	v.push_back(1);
//	v.push_back(1.1);
//	for (auto e : v)
//	{
//		cout << e << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

//int main()
//{
//	int a = 10;//��ֵ
//	int b = a;//��ֵ
//	a + b;//��ֵ
//
//	int& ref1 = a;//��ֵ���ã�����������ֵ
//
//	//int& ref2 = a + b;//��ֵ���ã�����������ֵ��Ȩ�޷Ŵ�
//	const int& ref2 = a + b;//const��ֵ���ã�����������ֵ
//
//	int&& ref3 = a + b;//��ֵ���ã�����������ֵ
//
//	//int&& ref4 = a;//��ֵ���ã�����������ֵ
//	int&& ref4 = move(a);//��ֵ���ã���������move�����ֵ
//	return 0;
//}

namespace my
{
	class string
	{
	public:
		typedef char* iterator;

		iterator begin()
		{
			return _str;
		}

		iterator end()
		{
			return _str + _size;
		}

		string(const char* str = "")
			: _size(strlen(str))
			, _capacity(_size)
		{
			cout << "string(const char* str) -- ����" << endl;
			_str = new char[_capacity + 1];
			strcpy(_str, str);
		}

		void swap(string& s)
		{
			std::swap(_str, s._str);
			std::swap(_size, s._size);
			std::swap(_capacity, s._capacity);
		}

		// ��������
		string(const string& s)
			:_str(nullptr)
		{
			cout << "string(const string& s) -- ��������" << endl;
			string tmp(s._str);
			swap(tmp);
		}

		// �ƶ�����
		string(string&& s)
			: _str(nullptr)
		{
			cout << "string(string&& s) -- �ƶ�����" << endl;
			swap(s);
		}

		// ������ֵ
		string& operator=(const string& s)
		{
			cout << "string& operator=(string s) -- ������ֵ" << endl;
			string tmp(s);
			swap(tmp);
			return *this;
		}

		// �ƶ���ֵ
		string& operator=(string&& s)
		{
			cout << "string& operator=(string&& s) -- �ƶ���ֵ" << endl;
			swap(s);
			return *this;
		}

		~string()
		{
			delete[] _str;
			_str = nullptr;
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
			if (_size >= _capacity)
			{
				size_t newcapacity = _capacity == 0 ? 4 : _capacity * 2;
				reserve(newcapacity);
			}
			_str[_size] = ch;
			++_size;
			_str[_size] = '\0';
		}

		string& operator+=(char ch)
		{
			push_back(ch);
			return *this;
		}

		string operator+(char ch)
		{
			string tmp = *this;
			tmp += ch;
			return tmp;
		}
	private:
		char* _str;
		size_t _size;
		size_t _capacity; // �������������ʶ��\0
	};
}

//int main()
//{
//	vector<string> v;
//	v.push_back("1111");
//	return 0;
//}

//int main()
//{
//	//my::string s1 = "hello";
//	//my::string ret1 = s1;
//	//my::string ret2 = s1 + '!';
//
//	//string s1 = "hello";
//	//string s2 = s1;
//	//string s3 = move(s1);
//
//	//my::string s1 = "hello";
//	//my::string s2;
//	//s2 = s1 + '!';
//
//	//string s1 = string("hello");
//	//string s2 = move(s1);
//	return 0;
//}

//void Fun(int& x) { cout << "��ֵ����" << endl; }
//void Fun(const int& x) { cout << "const ��ֵ����" << endl; }
//void Fun(int&& x) { cout << "��ֵ����" << endl; }
//void Fun(const int&& x) { cout << "const ��ֵ����" << endl; }
//
//template<typename T>
//void PerfectForward(T&& t)//�������ã������۵���
//{
//	Fun(forward<T>(t));//����ת��
//}
//
//int main()
//{
//	PerfectForward(10);
//
//	int a;
//	PerfectForward(a);//��ֵ
//	PerfectForward(move(a));//��ֵ
//
//	const int b = 8;
//	PerfectForward(b);//const ��ֵ
//	PerfectForward(move(b));//const ��ֵ
//	return 0;
//}

//class Person
//{
//public:
//	Person(const char* name = "", int age = 0)
//		:_name(name)
//		, _age(age)
//	{}
//
//	//Person(const Person& p)
//	//	:_name(p._name)
//	//	,_age(p._age)
//	//{}
//
//	//Person& operator=(const Person& p)
//	//{
//	//	if(this != &p)
//	//	{
//	//		_name = p._name;
//	//		_age = p._age;
//	//	}
//	//	return *this;
//	//}
//
//	//~Person()
//	//{}
//private:
//	my::string _name;
//	int _age;
//};
//
//int main()
//{
//	Person s1;
//	Person s2 = s1;
//	Person s3 = move(s1);
//	Person s4;
//	s4 = move(s2);
//
//	return 0;
//}



//// �ݹ���ֹ����
//void _ShowList()
//{
//	cout << endl;
//}
//// չ������
//template <class T, class... Args>
//void _ShowList(const T& val, Args... args)
//{
//	cout << val << " ";
//	_ShowList(args...);
//}
//
//template <class... Args>
//void ShowList(Args... args)
//{
//	_ShowList(args...);
//}

//template<class T>
//void PrintArgs(T val)
//{
//	cout << val << " ";
//}
//
//template<class... Args>
//void ShowList(Args... args)
//{
//	(PrintArgs(args), ...);
//	cout << endl;
//}


//template <class... Args>
//void ShowList(Args... args)
//{
//	cout << sizeof...(args) << endl;
//}
//
//int main()
//{
//	ShowList();
//	ShowList(1);
//	ShowList(1, 2.4);
//	ShowList(1, 2.4, 'g');
//	ShowList(1+1, 2.4, 'g', 3.56);
//	return 0;
//}

//int main()
//{
//	//list<my::string> lt;
//	//my::string s1 = "1111";
//	//lt.push_back(s1);
//	//lt.push_back(move(s1));
//
//	//my::string s2 = "2222";
//	//lt.emplace_back(s2);
//	//lt.emplace_back(move(s2));
//
//	//cout << endl;
//	//lt.push_back("3333");
//	//lt.emplace_back("3333");
//
//	list<pair<my::string, int>> lt;
//	lt.push_back(make_pair("1111", 1));
//	lt.push_back({ "2222",2 });
//
//	lt.emplace_back(make_pair("3333", 3));
//	lt.emplace_back("4444", 4);
//	return 0;
//}

int main()
{
	auto add1 = [](int x, int y)->int {return x + y; };
	cout << typeid(add1).name() << endl;

	auto add2 = [](int x, int y)
		{
			return x + y;
		};
	return 0;
}