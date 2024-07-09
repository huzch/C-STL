#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

namespace my
{
	template<class K>
	struct HashFunc
	{
		size_t operator()(const K& key)
		{
			return key;
		}
	};

	template<>
	struct HashFunc<string>
	{
		size_t operator()(const string& s)
		{
			size_t hash = 0;
			for (auto& ch : s)
			{
				hash = hash * 31 + ch;
			}
			return hash;
		}
	};

	template<class T>
	struct HashNode
	{
		HashNode<T>* _next;
		T _data;

		HashNode(const T& data)
			: _next(nullptr)
			, _data(data)
		{}
	};

	template<class K, class T, class KeyOfT, class Hash>
	class HashTable;//前置声明

	template<class K, class T, class Ref, class Ptr, class KeyOfT, class Hash>
	struct HashIterator
	{
		typedef HashNode<T> Node;
		typedef HashTable<K, T, KeyOfT, Hash> Ht;
		typedef HashIterator<K, T, Ref, Ptr, KeyOfT, Hash> Self;
		typedef HashIterator<K, T, T&, T*, KeyOfT, Hash> Iterator;

		Node* _node;
		const Ht* _ht;

		HashIterator(Node* node, const Ht* ht)
			: _node(node)
			, _ht(ht)
		{}

		HashIterator(const Iterator& it)
			: _node(it._node)
			, _ht(it._ht)
		{}

		Ref operator*()
		{
			return _node->_data;
		}

		Ptr operator->()
		{
			return &(operator*());
		}

		Self& operator++()
		{
			if (_node->_next)
			{
				_node = _node->_next;
			}
			else
			{
				int flag = 0;
				size_t hashi = Hash()(KeyOfT()(_node->_data)) % _ht->_tables.size();
				for (size_t i = hashi + 1; i < _ht->_tables.size(); ++i)
				{
					if (_ht->_tables[i])
					{
						_node = _ht->_tables[i];
						flag = 1;
						break;
					}
				}

				if (!flag)
				{
					_node = nullptr;
				}
			}
			return *this;
		}

		Self operator++(int)
		{
			Self tmp = *this;
			++*this;
			return tmp;
		}

		bool operator!=(const Self& s)
		{
			return _node != s._node;
		}

		bool operator==(const Self& s)
		{
			return _node == s._node;
		}
	};

	template<class K, class T, class KeyOfT, class Hash>
	class HashTable
	{
		template<class K, class T, class Ref, class Ptr, class KeyOfT, class Hash>
		friend struct HashIterator;
	protected:
		typedef HashNode<T> Node;
	public:
		typedef HashIterator<K, T, T&, T*, KeyOfT, Hash> iterator;
		typedef HashIterator<K, T, const T&, const T*, KeyOfT, Hash> const_iterator;

		iterator begin()
		{
			for (size_t i = 0; i < _tables.size(); ++i)
			{
				if (_tables[i])
				{
					return iterator(_tables[i], this);
				}
			}
			return iterator(nullptr, this);
		}

		const_iterator begin() const
		{
			for (size_t i = 0; i < _tables.size(); ++i)
			{
				if (_tables[i])
				{
					return const_iterator(_tables[i], this);
				}
			}
			return const_iterator(nullptr, this);
		}

		iterator end()
		{
			return iterator(nullptr, this);
		}

		const_iterator end() const
		{
			return const_iterator(nullptr, this);
		}

		HashTable()
		{
			_tables.resize(10);
		}

		~HashTable()
		{
			for (auto& cur : _tables)
			{
				while (cur)
				{
					Node* del = cur;
					cur = cur->_next;
					delete del;
				}
			}
		}

		iterator Find(const K& key)
		{
			size_t hashi = Hash()(key) % _tables.size();
			Node* cur = _tables[hashi];
			while (cur)
			{
				if (KeyOfT()(cur->_data) == key)
				{
					return iterator(cur, this);
				}
				cur = cur->_next;
			}
			return iterator(nullptr, this);
		}

		pair<iterator, bool> Insert(const T& data)
		{
			KeyOfT kot;
			iterator it = Find(kot(data));
			if (it._node)//保持key唯一
			{
				return make_pair(it, false);
			}

			Hash hash;
			if (_n == _tables.size())//负载因子为1时，扩容
			{
				size_t newsize = _tables.size() * 2;
				vector<Node*> newtables(newsize);
				for (auto& cur : _tables)
				{
					while (cur)
					{
						Node* next = cur->_next;
						//将旧表结点重新映射到新表上
						size_t hashi = hash(kot(cur->_data)) % newsize;
						cur->_next = newtables[hashi];
						newtables[hashi] = cur;
						//跳回旧表的下一结点
						cur = next;
					}
				}
				_tables.swap(newtables);
			}

			size_t hashi = hash(kot(data)) % _tables.size();
			Node* newnode = new Node(data);
			//头插
			newnode->_next = _tables[hashi];
			_tables[hashi] = newnode;
			++_n;
			return make_pair(iterator(newnode, this), true);
		}

		bool Erase(const K& key)
		{
			size_t hashi = Hash()(key) % _tables.size();
			Node* prev = nullptr;
			Node* cur = _tables[hashi];
			while (cur)
			{
				if (KeyOfT()(cur->_data) == key)
				{
					if (prev == nullptr)
					{
						_tables[hashi] = cur->_next;
					}
					else
					{
						prev->_next = cur->_next;
					}
					delete cur;
					--_n;
					return true;
				}
				prev = cur;
				cur = cur->_next;
			}
			return false;
		}
	protected:
		vector<Node*> _tables;
		size_t _n = 0;//有效数据个数
	};
}