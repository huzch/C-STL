#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//打印 0 - 10
//int main()
//{
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//判断一个正整数的位数
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	do
//	{
//		count++;
//		n /= 10;
//	} while (n);
//
//	//如果为while循环，则count=1
//	//while ((n /= 10) != 0)
//	//{
//	//	count++;
//	//}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//		{
//			//break;
//			continue;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//素数表
//方法1 暴力求解法
#include<math.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1001; i <= 2000; i += 2)//只判断奇数
	{
		//产生1000-2000内的奇数
		//假设i为素数
		int flag = 1;
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)//i能分解成两个因子，其中至少有一个因子小于根号i
		{
			//只要i能整除根号i前的数，说明根号i后也有一个数能被整除
			//如果没有，则找不到能被整除的数，即i为素数
			if (0 == (i % j))
			{
				flag = 0;//则此时i不为素数
				break;
			}
		}
		if (1 == flag)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d\n", count);
	return 0;
}

//方法2 筛选法
#include<stdbool.h>

int main()
{
	int i = 0;
	int count = 0;
	bool arr[2000] = { 0 };
	for (i = 2; i < 2000; i++)
	{
		arr[i] = 1;
	}
	//去除2，3，5……的倍数
	for (i = 2; i < 2000; i++)
	{
		if (arr[i])
		{
			if ((i >= 1000) && (i <= 2000))//设置打印区间
			{
				count++;
				printf("%d ", i);
			}

			int j = 0;
			for (j = i * i; j < 2000; j += i)//把+改成*，避免重复筛选
			{
				arr[j] = 0;
			}
		}


	}
	printf("\ncount=%d\n", count);
	return 0;
}

//高效素数判断
//6k+-1法
bool is_prime(int n)
{
	//2和3单独讨论
	if (n == 2 || n == 3)
	{
		return 1;
	}
	//不在6的倍数两侧的，肯定不为素数
	if ((n % 6) != 1 && (n % 6) != 5)
	{
		return 0;
	}
	//在6的倍数两侧也可能不为素数
	int i = 0;
	for (i = 5; i <= sqrt(n); i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return 0;
		}
	}
	//排除所有可能，剩余的就是素数
	return 1;
}

int main()
{
	//利用孪生素数性质，除了2，3，质数只能分布在6的倍数的两侧
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount=%d\n", count);

	//int n = 0;
	//scanf("%d", &n);
	//int ret = is_prime(n);
	//if (ret == 1)
	//{
	//	printf("素数\n");
	//}
	//else
	//{
	//	printf("非素数\n");
	//}
	return 0;
}


//猜数字游戏
#include<stdlib.h>
#include<time.h>

void game()
{
	int ret = rand() % 100 + 1;//1 - 100
	int count = 5;
	int guess = 0;
	printf("欢迎来到猜数字游戏，你一共有5次回答机会\n");
	while (count)
	{
		printf("请输入:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("很遗憾，机会用光了\n");
	}
}

void menu()
{
	printf("*************************\n");
	printf("****  1.play  0.exit ****\n");
	printf("*************************\n");
}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("已退出游戏\n");
			break;
		default:
			printf("输入非法，请重试\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}