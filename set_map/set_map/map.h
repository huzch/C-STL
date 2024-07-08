#pragma once
#include"RBTree.h"

namespace my
{
	template<class K, class V>
	class map
	{
		struct MapKeyOfT
		{
			const K& operator()(const pair<const K, V>& kv)
			{
				return kv.first;
			}
		};
	public:
		typedef typename RBTree<K, pair<const K, V>, MapKeyOfT>::iterator iterator;
		typedef typename RBTree<K, pair<const K, V>, MapKeyOfT>::const_iterator const_iterator;

		iterator begin()
		{
			return _t.begin();
		}

		const_iterator begin() const
		{
			return _t.begin();
		}

		iterator end()
		{
			return _t.end();
		}

		const_iterator end() const
		{
			return _t.end();
		}

		V& operator[](const K& key)
		{
			pair<iterator, bool> ret = _t.Insert(make_pair(key, V()));
			return ret.first->second;
		}

		pair<iterator, bool> insert(const pair<const K, V>& kv)
		{
			return _t.Insert(kv);
		}

		iterator find(const K& key)
		{
			return _t.Find(key);
		}
	protected:
		RBTree<K, pair<const K, V>, MapKeyOfT> _t;
	};

	void test_map1()
	{
		map<int, int> m;
		m.insert(make_pair(1, 2));
		m.insert(make_pair(2, 3));
		m.insert(make_pair(3, 4));

		map<int, int>::iterator it = m.begin();
		while (it != m.end())
		{
			cout << it->first << ":" << it->second << " ";
			++it;
		}
		cout << endl;
	}

	void test_map2()
	{
		string str[] = { "Î÷¹Ï","Æ»¹û","Î÷¹Ï","Æ»¹û","Ïã½¶","Àæ","Ã¢¹û","»ðÁú¹û" };
		map<string, int> countMap;

		for (auto& e : str)
		{
			++countMap[e];
		}

		for (auto& kv : countMap)
		{
			cout << kv.first << ":" << kv.second << endl;
		}
	}
}