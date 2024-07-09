#pragma once
#include"HashTable.h"

namespace my
{
	template<class K, class V, class Hash = HashFunc<K>>
	class unordered_map
	{
		struct MapKeyOfT
		{
			const K& operator()(const pair<const K, V>& kv)
			{
				return kv.first;
			}
		};
	public:
		typedef typename HashTable<K, pair<const K, V>, MapKeyOfT, Hash>::iterator iterator;
		typedef typename HashTable<K, pair<const K, V>, MapKeyOfT, Hash>::const_iterator const_iterator;

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

		pair<iterator, bool> insert(const pair<const K, V>& kv)
		{
			return _ht.Insert(kv);
		}

		V& operator[](const K& key)
		{
			pair<iterator, bool> ret = insert(make_pair(key, V()));
			return ret.first->second;
		}

		bool erase(const K& key)
		{
			return _ht.Erase(key);
		}
	protected:
		HashTable<K, pair<const K, V>, MapKeyOfT, Hash> _ht;
	};

	void print(const unordered_map<string, int>& m)
	{
		unordered_map<string, int>::const_iterator it = m.begin();
		while (it != m.end())
		{
			cout << it->first << ":" << it->second << " ";
			++it;
		}
		cout << endl;

		for (auto& e : m)
		{
			cout << e.first << ":" << e.second << " ";
		}
		cout << endl;
	}

	void test_unordered_map1()
	{
		unordered_map<int, int> m;
		m.insert(make_pair(1, 1));
		m.insert(make_pair(2, 2));
		m.insert(make_pair(3, 3));

		unordered_map<int, int>::iterator it = m.begin();
		while (it != m.end())
		{
			cout << it->first << ":" << it->second << " ";
			++it;
		}
		cout << endl;

		for (auto& e : m)
		{
			cout << e.first << ":" << e.second << " ";
		}
		cout << endl;
	}

	void test_unordered_map2()
	{
		string str[] = { "Î÷¹Ï","Æ»¹û","Î÷¹Ï","Æ»¹û","Ïã½¶","Àæ","Ã¢¹û","»ğÁú¹û" };
		unordered_map<string, int> countMap;

		for (auto& e : str)
		{
			++countMap[e];
		}

		for (auto& kv : countMap)
		{
			cout << kv.first << ":" << kv.second << endl;
		}

		print(countMap);
	}
}