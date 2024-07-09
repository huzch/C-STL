#pragma once
#include"HashTable.h"

namespace my
{
	template<class K, class Hash = HashFunc<K>>
	class unordered_set
	{
		struct SetKeyOfT
		{
			const K& operator()(const K& key)
			{
				return key;
			}
		};
	public:
		typedef typename HashTable<K, K, SetKeyOfT, Hash>::const_iterator iterator;
		typedef typename HashTable<K, K, SetKeyOfT, Hash>::const_iterator const_iterator;

		iterator begin()
		{
			return _ht.begin();
		}

		const_iterator begin() const
		{
			return _ht.begin();
		}

		iterator end()
		{
			return _ht.end();
		}

		const_iterator end() const
		{
			return _ht.end();
		}

		iterator find(const K& key)
		{
			return _ht.Find(key);
		}

		pair<iterator, bool> insert(const K& key)
		{
			return _ht.Insert(key);
		}

		bool erase(const K& key)
		{
			return _ht.Erase(key);
		}
	protected:
		HashTable<K, K, SetKeyOfT, Hash> _ht;
	};

	void print(const unordered_set<int>& s)
	{
		unordered_set<int>::const_iterator it = s.begin();
		while (it != s.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto& e : s)
		{
			cout << e << " ";
		}
		cout << endl;
	}

	void test_unordered_set1()
	{
		unordered_set<int> s;
		s.insert(1);
		s.insert(2);
		s.insert(3);

		unordered_set<int>::iterator it = s.begin();
		while (it != s.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;

		for (auto& e : s)
		{
			cout << e << " ";
		}
		cout << endl;

		print(s);
	}
}