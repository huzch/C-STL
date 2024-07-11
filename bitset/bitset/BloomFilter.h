#pragma once
#include"bitset.h"

namespace my
{
	struct BKDRHash
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

	struct APHash
	{
		size_t operator()(const string& s)
		{
			size_t hash = 0;
			for (long i = 0; i < s.size(); ++i)
			{
				if ((i & 1) == 0)
				{
					hash ^= ((hash << 7) ^ s[i] ^ (hash >> 3));
				}
				else
				{
					hash ^= (~((hash << 11) ^ s[i] ^ (hash >> 5)));
				}
			}
			return hash;
		}
	};

	struct DJBHash
	{
		size_t operator()(const string& s)
		{
			size_t hash = 5381;
			for (auto& ch : s)
			{
				hash += (hash << 5) + ch;
			}
			return hash;
		}
	};

	template<size_t N,
		size_t X = 5,//关联系数
		class K = string,
		class Hash1 = BKDRHash,
		class Hash2 = APHash,
		class Hash3 = DJBHash>
	class BloomFilter
	{
	public:
		void set(const K& key)
		{
			size_t len = N * X;
			size_t i1 = Hash1()(key) % len;
			size_t i2 = Hash2()(key) % len;
			size_t i3 = Hash3()(key) % len;

			_bs.set(i1);
			_bs.set(i2);
			_bs.set(i3);
		}

		bool test(const K& key)
		{
			size_t len = N * X;
			size_t i1 = Hash1()(key) % len;
			size_t i2 = Hash2()(key) % len;
			size_t i3 = Hash3()(key) % len;

			return _bs.test(i1) && _bs.test(i2) && _bs.test(i3);
		}
	protected:
		bitset<N* X> _bs;
	};
}