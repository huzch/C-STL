#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	//(are you ok??)
	printf("(are you ok\?\?)\n");
	//(are you ok]
	//在过去的一些编译器上，支持三字母
	//??) --- ]
	//??(
	return 0;
}

int main()
{
	printf("%c\n", 'a');
	printf("%c\n", '\'');

	printf("%s\n", "abcdef");
	printf("%s\n", "a");
	printf("%s\n", "\"");

	printf("c:\\test\\test.c");

	printf("\a");
	printf("abcdefghi\n");
	printf("abcde\bfghi\n");
	//abcdfghi
	return 0;
}

#include<string.h>
int main()
{
	printf("%c\n", '\130');
	printf("%c\n", '\x48');
	//strlen是求字符串长度的函数- 统计的是字符串中\0之前的字符的个数，不包含\0
	//string.h

	printf("%zd\n", strlen("abc"));
	printf("%zd\n", strlen("c:\test\130\test.c"));
	return 0;
}

//C语言是一条一条的语句构成的
//什么是语句

int main()
{
	;//空语句
	3 + 4;//表达式语句
	int a = 10;
	int b = 20;
	a + b;//表达式语句

	printf("hehe\n");//函数调用语句

	return 0;
}

//C语言风格的注释是不能嵌套注释的

int main()
{
	//创建整型变量a，并赋值10
	int a = 10; /*创建整型变量a，并赋值10*/
	/*
	int b = 0;
	int c = 0;
	*/
	return 0;
}

int main()
{
	//1. C语言中0表示假，非0表示真
	if (2 == 1 + 1)
		printf("hehe\n");

	return 0;
}


#include <stdbool.h>

int main()
{
	//_Bool flag = false;
	bool flag = true;
	if (flag)
		printf("hehe\n");

	return 0;
}

//sizeof 计算的结果的类型是size_t, size_t是一种无符号的整数，这种整数值在打印的时候，使用%zd
//int   --- %d
//char  --- %c
//字符串 -- %s

int main()
{
	printf("%zd\n", sizeof(char));
	printf("%zd\n", sizeof(_Bool));
	printf("%zd\n", sizeof(short));
	printf("%zd\n", sizeof(int));
	printf("%zd\n", sizeof(long));
	printf("%zd\n", sizeof(long long));
	printf("%zd\n", sizeof(float));
	printf("%zd\n", sizeof(double));
	printf("%zd\n", sizeof(long double));

	return 0;
}

int main()
{
	//int a = 10;

	//printf("%zd\n", sizeof a);
	//printf("%zd\n", sizeof(a));

	//printf("%zd\n", sizeof(int));
	printf("%zd\n", sizeof(3.14));//double
	printf("%zd\n", sizeof(3.14f));//float


	return 0;
}


int main()
{
	short s = 2;
	int a = 10;
	printf("%zd\n", sizeof(s = a + 1));
	//11
	//00000000 00001011
	printf("%d\n", s);
	return 0;
}

int main()
{
	//类型 变量名
	int    age;
	char ch;
	float f;
	double weight;
	_Bool num;

	return 0;
}

int main()
{
	int age = 0;//初始化 - 在变量创建的同时，给一个值叫初始化
	char ch = 'q';

	printf("%d\n", age);

	return 0;
}

int b = 100;//全局变量

int main()
{
	{
		int a = 10;//局部变量
		printf("%d\n", a);
	}
	//printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}