#pragma once
#include<iostream>
#include<stdlib.h>
using namespace std;

class Stack
{
	void Init(int capacity = 4);

	int* _a;
	int _top;
	int _capacity;
};