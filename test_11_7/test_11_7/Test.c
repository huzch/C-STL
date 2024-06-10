#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//想描述一个学生
//名字+年龄+成绩
//
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//} s3 = { "wangwu", 33, 66.0f }, s4 = {"翠花", 18, 100.0f};//全局变量
//
//int main()
//{
//	struct Stu s1 = {"zhangsan", 20, 95.5f};//局部变量
//	struct Stu s2 = {"lisi", 18, 87.5f};
//	struct Stu s5 = {.score= 98.5f, .name="hehe", .age = 18};
//
//	//. 结构成员访问操作符
//	//结构体变量.成员名
//	//
//	printf("%s %d %f\n", s1.name, s1.age, s1.score);
//	printf("%s %d %f\n", s4.name, s4.age, s4.score);
//
//
//	//结构体指针
//	struct Stu* ps = &s1;//取出s1的地址
//	printf("%s %d %f\n", ps->name, ps->age, ps->score);
//	//结构体指针->成员名
//	
//	return 0;
//}

//
//struct Point
//{
//	int x;
//	int y;
//};
//
//struct Data
//{
//	int num;
//	struct Point p;
//};
//
//int main()
//{
//	struct Data d = { 200, {10, 11} };
//	printf("num = %d p.x = %d p.y = %d\n", d.num, d.p.x, d.p.y);
//
//	return 0;
//}
//
//

//
//int main()
//{
//	//char类型的取值范围是-128~127
//	//char 是占用1个字节的，1个字节是8个bit位
//	char c1 = 125;
//	//00000000000000000000000001111101
//	//发生截断
//	//01111101 -c1
//	//
//	char c2 = 10;
//	//00000000000000000000000000001010
//	//00001010 -c2
//	//
//	//00000000000000000000000001111101 -c1 - 有符号的char
//	//00000000000000000000000000001010 -c2 - 有符号的char
//	//00000000000000000000000010000111  
//	//10000111 -c3
//	//
//	char c3 = c1 + c2;
//	//11111111111111111111111110000111
//	//10000000000000000000000001111000
//	//10000000000000000000000001111001
//	//-121
//	printf("%d\n", c3);//-121
//	printf("%d\n", c1+c2);
//	//00000000000000000000000001111101
//	//00000000000000000000000000001010
//	//00000000000000000000000010000111  
//	//
//	//%d 是打印有符号的整数
//	//
//	return 0;
//}
//


//#include <stdio.h>
//
//int fun()
//{
//    static int count = 1;
//    return ++count;
//}
//int main()
//{
//    int answer;
//    answer = fun() - fun() * fun();
//    printf("%d\n", answer);//输出多少？
//    return 0;
//}
//


//#include <stdio.h>
//int main()
//{
//    int i = 1;
//    int ret = (++i) + (++i) + (++i);
//
//    printf("%d\n", ret);
//    printf("%d\n", i);
//    return 0;
//}

//int main()
//{
//	//1&2
//	//
//	int a = 0x11223344;
//	//printf("%p\n", &a);//&取地址操作符
//	int * pa = &a;//pa 是指针变量 - 存放地址 - 地址又被称为指针，指针变量是用来存放指针的
//
//	//int* pa;
//	//int *pa;
//	//int * pa;
//
//	return 0;
//}

//
//指针 和 指针变量
//地址    变量-存放地址
//
//口头语中：说的指针一般是指针变量
//


//&      ----   *
//取地址         解引用操作符
//
//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	*pa = 20;//* 是解引用操作符,*pa 等价于a
//	//a = 20;
//	printf("%d\n", a);
//
//	//char ch = 'w';
//	//char * pc = &ch;
//
//
//	return 0;
//}
//


//int main()
//{
//	char* pc = NULL;
//	int* pi = NULL;
//
//	printf("%zd\n", sizeof(pc));
//	printf("%zd\n", sizeof(pi));
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	printf("%p", &a);
//	return 0;
//}

int main()
{
	int a = 10;
	int* pa = &a;       //取出a的地址并存储到指针变量pa中

	return 0;
}