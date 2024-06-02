#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//要求输入一个整数，判断输入的整数是0，还是正数或者负数。

//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断
//	if (num == 0)
//		printf("输入的值是0\n");
//	else
//	{
//		if (num > 0)
//			printf("输入的值是正数\n");
//		else
//			printf("输入的值是负数\n");
//	}
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	//输入
//	scanf("%d", &num);
//	//判断
//	if (num == 0)
//		printf("输入的值是0\n");
//	else if (num > 0)
//			printf("输入的值是正数\n");
//	else
//		printf("输入的值是负数\n");
//	return 0;
//}
//
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num > 0)
//	{
//		if (num % 2 == 0)
//			printf("偶数\n");
//		else
//			printf("奇数\n");
//	}
//	else
//	{
//		printf("非正数\n");
//	}
//	return 0;
//}
//

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("少年\n");
//	else
//	{
//		if (age <= 44)
//			printf("青年\n");
//		else
//		{
//			if (age <= 59)
//				printf("中老年\n");
//			else
//			{
//				if (age <= 89)
//					printf("老年\n");
//				else
//					printf("老寿星\n");
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("少年\n");
//	else if (age <= 44)
//		printf("青年\n");
//	else if (age <= 59)
//		printf("中老年\n");
//	else if (age <= 89)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    { 
//        if (b == 2)
//            printf("hehe\n");
//    }
//    else
//    {
//        printf("haha\n");
//    }
//
//    return 0;
//}


//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//        if (b == 2)
//            printf("hehe\n");
//        else
//            printf("haha\n");
//    return 0;
//}

//《高质量C/C++编程》
//int main()
//{
//	int a=0;
//	int a = 0;
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	if (a > 5);//这里加上分号，if控制的就是这个分号
//		printf("hehe\n");
//	else
//		printf("haha\n");
//
//	return 0;
//}

//int main()
//{
//	int r = (2 == 2);
//	printf("%d\n", r);
//	return 0;
//}


//int main()
//{
//	int a = 3;
//	//如果一个变量和一个常量比较相等，建议将常量放在==的左边
//	if (5 == a)//赋值
//		printf("hehe\n");
//
//	return 0;
//}


//int main()
//{
//	int x = 10;
//	int y = 12;
//	int z = 14;
//
//	if (x<y && y<z)//&& 并且
//	{
//		printf("hehe\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18 && age <= 36)
//	//if(18<=age<=36)//err
//		printf("青年\n");
//
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d", &a);
//    //if (a > 5)
//    //    b = 3;
//    //else
//    //    b = -3;
//
//    b = (a > 5 ? 3 : -3);
//
//    printf("%d\n", b);
//    return 0;
//}

//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    
//    int m = (a > b ? a : b);
//
//    printf("%d\n", m);
//
//    return 0;
//}

//int main()
//{
//	int flag = 4;
//	//如果flag为假，要打印呵呵
//	if (!flag)
//	{
//		printf("hehe\n");
//	}
//	if (flag)
//	{
//
//	}
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month >= 3 && month <= 5)
//		printf("春季\n");
//
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 1 || month == 2 || month == 12)
//		printf("冬季\n");
//
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (year % 4 == 0)
//	{
//		if (year % 100 != 0)
//			printf("闰年\n");
//	}
//	if (year % 400 == 0)
//	{
//		printf("闰年\n");
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (((year % 4 == 0) && (year % 100 != 0))||(year % 400 == 0))
//	{
//			printf("闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	return 0;
//}

#include <stdio.h>

//int main()
//{
//    int i = 0, a = 0, b = 2, c = 3, d = 4;
//
//    //i = a++ && ++b && d++;
//    //  1             
//    //  a=2    b=3   c =3    d=5
//
//    i = a++ || ++b || d++;
//    //  0   || 3   ||
//    //  a=1    b=3    d=4
//
//    printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//    printf("i=%d\n", i);
//    return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 3 == 0)
//		printf("被3整除，余数为0\n");
//	else if (num % 3 == 1)
//		printf("余数是1\n");
//	else
//		printf("余数是2\n");
//
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//
//	switch (num % 3)
//	{
//	case 1:
//		printf("余数是1\n");
//		break;
//	case 2:
//		printf("余数是2\n");
//		break;
//	case 0:
//		printf("余数是0\n");
//		break;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	switch (n)
//	{
//	case 1:
//		break;
//	case 2:
//		break;
//
//		//...
//	}
//	return 0;
//}


//int main()
//{
//	char ch = 'w';
//	scanf("%c", &ch);//字符是以ASCII码的形式进行存储的，ASCII值是整数，字符属于整型家族
//	switch (ch)
//	{
//	case 'a':
//		break;
//	case 'b':
//		break;
//
//		//...
//	}
//	return 0;
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int m = 4;
//	switch (n)
//	{
//	case 1:
//		break;
//	case 2:
//		break;
//	case 2 + 1:
//		break;
//	case m://整型常量表达式才行
//		break;
//		//...
//	}
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}
//



//int main()
//{
//	if (1)
//		printf("hehe\n");
//
//	return 0;
//}

//int main()
//{
//	//死循环
//	while (1)
//		printf("hehe\n");
//
//	return 0;
//}


//int main()
//{
//	//1 2 3 4 5 6 7 8 9 10
//
//	int i = 1;//初始化
//
//
//	while (i <= 10)//判断
//	{
//		printf("%d ", i);
//		i++;//++i;//调整
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);//521
//
//	while (n)
//	{
//		printf("%d ", n % 10);
//		n = n / 10;
//	}
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		printf("%d ", n);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	//3 6 9 
//	for (i = 1; i <= 100; i++)
//	{
//		//每一次循环进入产生i
//		//判断i是否是3的倍数
//		if (i % 3 == 0)
//		{
//			sum += i;
//		}
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

int main()
{
	int i = 0;
	int sum = 0;
	//3 6 9 
	for (i = 3; i <= 100; i += 3)
	{
		sum += i;
	}
	printf("%d\n", sum);

	return 0;
}