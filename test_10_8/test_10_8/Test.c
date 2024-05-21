#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	printf("hehe\n");
	return 0;
}
//编译+链接+运行  ctrl+f5

//旧式写法
void main()
{

}

//void 是表示main函数不接受参数
int main(void)
{
	//……
	return 0;
}


//main函数其实也可以有参数，参数有特殊意义

int main(int argc, char* argv[], char* envp[])
{

	return 0;
}

//stdio -- standard input output
//标准输入输出头文件

int main()
{
	//printf是一个函数
	//库函数
	//功能：在屏幕上打印信息
	//
	//scanf - 输入
	printf("hello world\n");//输出
	return 0;
}
//注释选中行 ctrl+k+c
//取消注释 ctrl+k+u

int main()
{
	//占位符
	//%d - 整型
	//%c - 字符
	//%f - 浮点型
	printf("%d\n", 100);
	printf("%c\n", 'q');
	printf("%f\n", 3.14);
}

int main()
{
	int i = 0;
	for (i = 32; i <= 127; i++)
	{
		printf("%c ", i);
	}
	return 0;
}

int main()
{
	//%s - 字符串
	printf("%s\n", "hello");
	return 0;
}

//字符串中有一个结束标志：\0
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };

	printf("%s\n", arr1);
	printf("%s\n", arr2);

	printf("abc\0def");
	return 0;
}

