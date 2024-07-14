#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<vector>
#include<thread>
using namespace std;

//template<class T>
//struct ListNode
//{
//	T _val;
//	ListNode* _prev = nullptr;
//	ListNode* _next = nullptr;
//
//	ListNode(const T& val = T())
//		: _val(val)
//	{}
//};
//
//template<class T, class Ref, class Ptr>
//struct ListIterator
//{
//	typedef ListNode<T> Node;
//	typedef ListIterator<T, Ref, Ptr> Self;
//	Node* _node;
//
//	ListIterator(Node* node)
//		: _node(node)
//	{}
//
//	Ref operator*()
//	{
//		return _node->_val;
//	}
//
//	Ptr operator->()
//	{
//		return &_node->_val;
//	}
//
//	Self& operator++()
//	{
//		_node = _node->_next;
//		return *this;
//	}
//
//	Self operator++(int)
//	{
//		Self tmp = *this;
//		++*this;
//		return tmp;
//	}
//
//	Self& operator--()
//	{
//		_node = _node->_prev;
//		return *this;
//	}
//
//	Self operator--(int)
//	{
//		Self tmp = *this;
//		--*this;
//		return tmp;
//	}
//
//	bool operator!=(const Self& s)
//	{
//		return _node != s._node;
//	}
//
//	bool operator==(const Self& s)
//	{
//		return _node == s._node;
//	}
//};
//
//template<class T>
//class List
//{
//	typedef ListNode<T> Node;
//	typedef ListIterator<T, T&, T*> iterator;
//	typedef ListIterator<T, const T&, const T*> const_iterator;
//public:
//	iterator begin()
//	{
//		return iterator(_head->_next);
//	}
//
//	const_iterator begin() const
//	{
//		return const_iterator(_head->_next);
//	}
//
//	iterator end()
//	{
//		return iterator(_head);
//	}
//
//	const_iterator end() const
//	{
//		return const_iterator(_head);
//	}
//
//	List()
//	{
//		_head = new Node;
//		_head->_prev = _head;
//		_head->_next = _head;
//	}
//
//	~List()
//	{
//		Node* cur = _head->_next;
//		while (cur != _head)
//		{
//			auto next = cur->_next;
//			delete cur;
//			cur = next;
//		}
//		delete _head;
//	}
//
//	void insert(iterator pos, const T& val)
//	{
//		Node* cur = pos._node;
//		Node* prev = cur->_prev;
//		Node* node = new Node(val);
//
//		prev->_next = node;
//		node->_prev = prev;
//		node->_next = cur;
//		cur->_prev = node;
//	}
//
//	void push_front(const T& val)
//	{
//		insert(begin(), val);
//	}
//
//	void push_back(const T& val)
//	{
//		insert(end(), val);
//	}
//
//	iterator erase(iterator pos)
//	{
//		Node* cur = pos._node;
//		Node* prev = cur->_prev;
//		Node* next = cur->_next;
//
//		prev->_next = next;
//		next->_prev = prev;
//		delete cur;
//
//		return iterator(next);
//	}
//
//	void pop_front()
//	{
//		erase(begin());
//	}
//
//	void pop_back()
//	{
//		erase(--end());
//	}
//private:
//	Node* _head = nullptr;
//};


//double Division(int len, int time)
//{
//	if (time == 0)
//	{
//		throw "除零错误";
//	}
//	else
//	{
//		return (double)len / time;
//	}
//}
//
//void func()
//{
//	throw "error";
//}
//
//void test()
//{
//	try
//	{
//		func();
//	}
//	catch (const char* str)
//	{
//		cout << str << endl;
//	}
//}
//
//void Func()
//{
//	try
//	{
//		int len, time;
//		cin >> len >> time;
//		cout << Division(len, time) << endl;
//		cout << "111111111111111" << endl;
//		func();
//	}
//	catch (const char* str)
//	{
//		cout << str << endl;
//	}
//	cout << "222222222222222222" << endl;
//}
//
//int main()
//{
//	while (1)
//	{
//		try
//		{
//			Func();
//		}
//		catch (const char* str)
//		{
//			cout << str << endl;
//		}
//		catch (...)
//		{
//			cout << "未知异常" << endl;
//		}
//	}
//
//	return 0;
//}

// 服务器开发中通常使用的异常继承体系
//class Exception
//{
//public:
//	Exception(const string& errmsg, int id)
//		: _errmsg(errmsg)
//		, _id(id)
//	{}
//	virtual string what() const
//	{
//		return _errmsg;
//	}
//protected:
//	string _errmsg;
//	int _id;
//};
//
//class SqlException : public Exception
//{
//public:
//	SqlException(const string& errmsg, int id, const string& sql)
//		: Exception(errmsg, id)
//		, _sql(sql)
//	{}
//	virtual string what() const
//	{
//		string str = "SqlException:";
//		str += _errmsg;
//		str += "->";
//		str += _sql;
//		return str;
//	}
//private:
//	const string _sql;
//};
//
//class CacheException : public Exception
//{
//public:
//	CacheException(const string& errmsg, int id)
//		: Exception(errmsg, id)
//	{}
//	virtual string what() const
//	{
//		string str = "CacheException:";
//		str += _errmsg;
//		return str;
//	}
//};
//
//class HttpServerException : public Exception
//{
//public:
//	HttpServerException(const string& errmsg, int id, const string& type)
//		: Exception(errmsg, id)
//		, _type(type)
//	{}
//	virtual string what() const
//	{
//		string str = "HttpServerException:";
//		str += _type;
//		str += ":";
//		str += _errmsg;
//		return str;
//	}
//private:
//	const string _type;
//};
//
//void SQLMgr()
//{
//	srand(time(0));
//	if (rand() % 7 == 0)
//	{
//		throw SqlException("权限不足", 100, "select * from name = '张三'");
//	}
//	//throw "xxxxxx";
//}
//
//void CacheMgr()
//{
//	srand(time(0));
//	if (rand() % 5 == 0)
//	{
//		throw CacheException("权限不足", 100);
//	}
//	else if (rand() % 6 == 0)
//	{
//		throw CacheException("数据不存在", 101);
//	}
//	SQLMgr();
//}
//
//void HttpServer()
//{
//	// ...
//	srand(time(0));
//	if (rand() % 3 == 0)
//	{
//		throw HttpServerException("请求资源不存在", 100, "get");
//	}
//	else if (rand() % 4 == 0)
//	{
//		throw HttpServerException("权限不足", 101, "post");
//	}
//	CacheMgr();
//}
//
//int main()
//{
//	while (1)
//	{
//		this_thread::sleep_for(chrono::seconds(1));
//		try
//		{
//			HttpServer();
//		}
//		catch (const Exception& e) // 这里捕获父类对象就可以
//		{
//			// 多态
//			cout << e.what() << endl;
//		}
//		catch (...)
//		{
//			cout << "Unkown Exception" << endl;
//		}
//	}
//	return 0;
//}

//double Division(int len, int time)
//{
//	if (time == 0)
//	{
//		throw "除零错误";
//	}
//	else
//	{
//		return (double)len / time;
//	}
//}
//
//void Func()
//{
//	int* p = new int[10];
//	try
//	{
//		int len, time;
//		cin >> len >> time;
//		cout << Division(len, time) << endl;
//	}
//	catch (...)
//	{
//		delete[] p;
//		throw;//捕到什么抛什么
//	}
//	delete[] p;
//}
//
//int main()
//{
//	try
//	{
//		Func();
//	}
//	catch (const char* str)
//	{
//		cout << str << endl;
//	}
//
//	return 0;
//}

int main()
{
	try
	{
		vector<int> v(10, 5);
		// 这里如果系统内存不够也会抛异常
		v.reserve(1000000000);
		// 这里越界会抛异常
		v.at(10) = 100;
	}
	catch (const exception& e) // 这里捕获父类对象就可以
	{
		cout << e.what() << endl;
	}
	catch (...)
	{
		cout << "Unkown Exception" << endl;
	}
	return 0;
}