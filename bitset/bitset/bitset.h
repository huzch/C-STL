#pragma once
#include<iostream>
#include<vector>
using namespace std;

namespace my
{
	template<size_t N>
	class bitset
	{
	public:
		bitset()
		{
			_bits.resize(N / 8 + 1);
		}

		bool test(size_t x)
		{
			size_t i = x / 8, j = x % 8;
			return _bits[i] & (1 << j);
			//return (_bits[i] >> j) & 1;
		}

		void set(size_t x)
		{
			size_t i = x / 8, j = x % 8;
			if (!test(x))
			{
				_bits[i] |= (1 << j);
				++_n;
			}
		}

		void reset(size_t x)
		{
			size_t i = x / 8, j = x % 8;
			if (test(x))
			{
				_bits[i] &= ~(1 << j);
				--_n;
			}
		}
	protected:
		vector<char> _bits;
		size_t _n = 0;//有效数据个数
	};

	void test_bitset()
	{
		bitset<1000> bs;
		int arr[] = { 55,48,66,268,12,43,97,888 };
		for (auto& num : arr)
		{
			bs.set(num);
		}

		cout << bs.test(48) << endl;
	}

	template<size_t N>
	class twobitset
	{
	public:
		void set(size_t x)
		{
			if (!_bs1.test(x) && !_bs2.test(x))//00
			{
				_bs2.set(x);
			}
			else if (!_bs1.test(x) && _bs2.test(x))//01
			{
				_bs1.set(x);
				_bs2.reset(x);
			}
			//10
		}

		void print()
		{
			for (size_t i = 0; i < N; ++i)
			{
				if (_bs2.test(i))
				{
					cout << i << " ";
				}
			}
			cout << endl;
		}
	protected:
		bitset<N> _bs1;
		bitset<N> _bs2;
	};

	void test_twobitset()
	{
		twobitset<1000> bs;
		int arr[] = { 55,48,66,268,12,43,97,888,1,2,3,4 ,1 };
		for (auto& num : arr)
		{
			bs.set(num);
		}

		bs.print();
	}
}