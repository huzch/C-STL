#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	//地址，特例，48
//	printf("%d\n", sizeof(a[0][0]));
//	//元素，4
//	printf("%d\n", sizeof(a[0]));
//	//地址，特例，16
//	printf("%d\n", sizeof(a[0] + 1));
//	//地址，4/8
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	//元素，4
//	printf("%d\n", sizeof(a + 1));
//	//地址，4/8
//	printf("%d\n", sizeof(*(a + 1)));
//	//元素，16
//	printf("%d\n", sizeof(&a[0] + 1));
//	//地址，4/8
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	//元素，16
//	printf("%d\n", sizeof(*a));
//	//元素，16
//	printf("%d\n", sizeof(a[3]));
//	//地址，特例，16
//}

//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}

int main()
{
	char* c[] = { "ENTER","NEW","POINT","FIRST" };
	char** cp[] = { c + 3,c + 2,c + 1,c };
	char*** cpp = cp;
	printf("%s\n", **++cpp);//POINT
	printf("%s\n", *-- * ++cpp + 3);//ER
	printf("%s\n", *cpp[-2] + 3);//ST
	printf("%s\n", cpp[-1][-1] + 1);//EW
	return 0;
}

//
//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%zd\n", sizeof(arr));
//	printf("%zd\n", sizeof(arr + 0));//arr+0是数组首元素的地址，地址的大小是4/8个字节
//	printf("%zd\n", sizeof(*arr));//*arr是数组的首元素，这里计算的是首元素的大小 1
//	printf("%zd\n", sizeof(arr[1]));//1
//	printf("%zd\n", sizeof(&arr));//&arr - 是数组的地址，数组的地址也是地址，是地址就是4/8个字节
//	printf("%zd\n", sizeof(&arr + 1));//&arr+1，跳过整个数组，指向了数组的后边，4/8
//	printf("%zd\n", sizeof(&arr[0] + 1));//&arr[0] + 1是第二个元素的地址 4/8
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%zd\n", strlen(arr));//arr也是数组首元素的地址 6
//	printf("%zd\n", strlen(arr + 0));//arr + 0是数组首元素的地址，6
//	//printf("%zd\n", strlen(*arr));//？传递是'a'-97,//err
//	//printf("%zd\n", strlen(arr[1]));//?'b'-98//err
//	printf("%zd\n", strlen(&arr));//6, &arr虽然是数组的地址，但是也是指向数组的起始位置
//	printf("%zd\n", strlen(&arr + 1));//随机值
//	printf("%zd\n", strlen(&arr[0] + 1));//&arr[0] + 1是第二个元素的地址 - 5
//
//	return 0;
//}
//
//int main()
//{
//	char* p = "abcdef";
//	printf("%zd\n", sizeof(p));//4/8 计算的指针变量的大小
//	printf("%zd\n", sizeof(p + 1));//p + 1是'b'的地址，是地址大小就是4/8个字节
//	printf("%zd\n", sizeof(*p));//*p就是'a'，大小是1个字节
//	printf("%zd\n", sizeof(p[0]));//p[0]--> *(p+0) - *p //1字节
//	printf("%zd\n", sizeof(&p));//&p也是地址，是指针变量p的地址，大小也是4/8个字节
//	printf("%zd\n", sizeof(&p + 1));//&p + 1是指向p指针变量后面的空间，也是地址，是4/8个字节
//	printf("%zd\n", sizeof(&p[0] + 1));//&p[0]+1是'b'的地址，是地址就是4/8个字节
//
//	return 0;
//}
//

//int main()
//{
//	char* p = "abcdef";
//
//	printf("%zd\n", strlen(p));//6
//	printf("%zd\n", strlen(p + 1));//5
//	//printf("%zd\n", strlen(*p));//err
//	//printf("%zd\n", strlen(p[0]));//p[0]--*(p+0)-->*p //err
//	printf("%zd\n", strlen(&p));//随机值
//	printf("%zd\n", strlen(&p + 1));//随机值
//	printf("%zd\n", strlen(&p[0] + 1));//5
//
//	return 0;
//}
//

//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	//二维数组也是数组，之前对数组名理解也是适合
//	int a[3][4] = { 0 };
//	printf("%zd\n", sizeof(a));//12*4 = 48个字节，数组名单独放在sizeof内部
//	printf("%zd\n", sizeof(a[0][0]));//4
//	printf("%zd\n", sizeof(a[0]));//a[0]是第一行这个一维数组的数组名，数组名单独放在sizeof内部了
//	//计算的是第一行的大小，单位是字节，16个字节
//
//	printf("%zd\n", sizeof(a[0] + 1));//a[0]第一行这个一维数组的数组名,这里表示数组首元素
//	//也就是a[0][0]的地址，a[0] + 1是a[0][1]的地址 4/8
//
//	printf("%zd\n", sizeof(*(a[0] + 1)));//a[0][1] - 4个字节
//	printf("%zd\n", sizeof(a + 1));//a是二维数组的数组名，但是没有&，也没有单独放在sizeof内部
//	//所以这里的a是数组收元素的地址，应该是第一行的地址，a+1是第二行的地址
//	//大小也是4/8 个字节
//	printf("%zd\n", sizeof(*(a + 1)));//*(a + 1) ==> a[1] - 第二行的数组名，单独放在sizeof内部，计算的是第二行的大小
//	//16个字节
//	printf("%zd\n", sizeof(&a[0] + 1));//&a[0]是第一行的地址，&a[0]+1就是第二行的地址，4/8
//	printf("%zd\n", sizeof(*(&a[0] + 1)));//访问的是第二行，计算的是第二行的大小，16个字节
//	//int(*p)[4] = &a[0] + 1;
//	//
//	printf("%zd\n", sizeof(*a));//这里的a是第一行的地址，*a就是第一行，sizeof(*a)计算的是第一行的大小-16
//	//*a --> *(a+0) --> a[0]
//	printf("%zd\n", sizeof(a[3]));//这里不存在越界
//	//因为sizeof内部的表达式不会真实计算的
//	//计算的是第四行的大小-16
//
//	return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);
//    printf("%d,%d", *(a + 1), *(ptr - 1));
//    return 0;
//}
//



//在X86环境下
//假设结构体的大小是20个字节
//程序输出的结果是啥？

//struct Test
//{
//    int Num;
//    char* pcName;
//    short sDate;
//    char cha[2];
//    short sBa[4];
//}* p = (struct Test*)0x100000;
////
////指针+整数
////
//int main()
//{
//    printf("%#x\n", p + 0x1); //0x100000+20 == 0x100014
//    printf("%#x\n", (unsigned long)p + 0x1);//0x100000+1 == 0x100001
//    printf("%#x\n", (unsigned int*)p + 0x1);//0x100000+1 == 0x100004
//    return 0;
//}


//#include <stdio.h>
//
//int main()
//{
//    //注意逗号表达式
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}
//

//假设环境是x86环境，程序输出的结果是啥？
//#include <stdio.h>
//
//int main()
//{
//    int a[5][5];
//    int(* p)[4];
//    p = a;
//    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//
//    return 0;
//}
//
//


//#include <stdio.h>
//int main()
//{
//    int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//
//    int* ptr1 = (int*)(&aa + 1);
//    int* ptr2 = (int*)(*(aa + 1));
//    printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//    return 0;
//}

//
//#include <stdio.h>
//int main()
//{
//    char* a[] = { "work","at","alibaba" };
//    char** pa = a;
//    pa++;
//    printf("%s\n", *pa);
//    return 0;
//}
//
//


//#include <stdio.h>
//int main()
//{
//    char* c[] = { "ENTER","NEW","POINT","FIRST" };
//    char** cp[] = { c + 3,c + 2,c + 1,c };
//    char*** cpp = cp;
//    printf("%s\n", **++cpp);
//    printf("%s\n", *-- * ++cpp + 3);
//    printf("%s\n", *cpp[-2] + 3);
//    printf("%s\n", cpp[-1][-1] + 1);
//    return 0;
//}


//int main()
//{
//	int ch = getchar();
//	if (ch >= 'A' && ch <= 'Z')
//	{
//		printf("大写\n");
//	}
//	else if (ch >= 'a' && ch <= 'z')
//	{
//		printf("小写\n");
//	}
//
//	return 0;
//}

#include <ctype.h>

//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	//if (islower(ch))
//	//{
//	//	printf("小写\n");
//	//}
//	//else if (isupper(ch))
//	//{
//	//	printf("大写\n");
//	//}
//
//	return 0;
//}

//把一个字符串转换成全小写

//int main()
//{
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = arr[i] + 32;
//		}
//		putchar(arr[i]);
//		i++;
//	}
//	return 0;
//}


//int main()
//{
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			//arr[i] = arr[i] + 32;
//			arr[i] = tolower(arr[i]);
//		}
//		putchar(arr[i]);
//		i++;
//	}
//	return 0;
//}
//
//int main()
//{
//	int ch = getchar();
//	int r = toupper(ch);
//	printf("%c\n", r);
//
//	return 0;
//}
//