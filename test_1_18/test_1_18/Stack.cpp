#define _CRT_SECURE_NO_WARNINGS 1
#include"Stack.h"

void Stack::Init(int capacity)
{
	int* tmp = (int*)malloc(sizeof(int) * capacity);
	if (tmp == nullptr)
	{
		perror("malloc fail");
		return;
	}
	_a = tmp;
	_capacity = capacity;
	_top = 0;
}