#define _CRT_SECURE_NO_WARNINGS 1
#include"string.h"

int main()
{
	try
	{
		my::test_string8();
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}
	return 0;
}