#pragma once
#include"RBTree.h"

namespace my
{
	template<class K>
	class set
	{
		struct SetKeyOfT
		{
			const K& operator()(const K& key)
			{
				return key;
			}
		};
	public:
		typedef typename RBTree<K, K, SetKeyOfT>::const_iterator iterator;
		typedef typename RBTree<K, K, SetKeyOfT>::const_iterator const_iterator;

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

		pair<iterator, bool> insert(const K& key)
		{
			return _t.Insert(key);
		}

		iterator find(const K& key)
		{
			return _t.Find(key);
		}
	protected:
		RBTree<K, K, SetKeyOfT> _t;
	};

	void test_set1()
	{
		set<int> s;
		s.insert(1);
		s.insert(2);
		s.insert(3);

		set<int>::iterator it = s.begin();
		while (it != s.end())
		{
			cout << *it << " ";
			++it;
		}
		cout << endl;
	}
}