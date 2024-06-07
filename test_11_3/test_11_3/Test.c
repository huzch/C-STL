#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%p\n", &a);
//	printf("%p\n", &b);
//
//	return 0;
//}


#include <stdio.h>

//int main()
//{
//    int i = 0;
//    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//    printf("%p\n", &i);
//    printf("%p\n", &arr[0]);
//    printf("%p\n", &arr[9]);
//
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hehe\n");
//    }
//    return 0;
//}
//

//递归

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//

//int Fact(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return n* Fact(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//输入3
//	int ret = Fact(5);
//	printf("%d\n", ret);
//
//	return 0;
//}
//
//
//void Print(int n)//1234
//{
//	if (n > 9)
//	{
//		Print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//输入一个整数n，按照顺序打印整数的每一位。
//	Print(n);
//
//	//while (n)
//	//{
//	//	printf("%d ", n % 10);
//	//	n = n / 10;
//	//}
//
//	return 0;
//}
//

//用迭代的方式实现的

//int Fact(int n)
//{
//	//循环产生1~n的数字就可以
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	return ret;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int count = 0;
//
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count = %d\n", count);
//
//	return 0;
//}
//

//迭代的方式
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n>=3)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//void test(int n)
//{
//	if (n <= 10000)
//		test(n+1);
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}

int main()
{
	int a = 0177;
	printf("%d\n", a);//以10进制的形式打印有符号的整数
	int b = 0x17;
	printf("%d\n", b);

	return 0;
}
//%x - 16进制形式打印
//%o - 8进制的形式打印
//