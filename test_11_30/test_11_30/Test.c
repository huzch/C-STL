#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//宏
//offsetof - 计算结构体成员相较于起始位置的偏移量
#include <stddef.h>
//
//struct S1
//{
//	char c1;
//	char c2;
//	int i;
//};
//
//struct S2
//{
//	char c1;
//	int i;
//	char c2;
//};
//
//struct S3
//{
//	double d;
//	char c;
//	int i;
//};
//
//struct S4
//{
//	char c1;
//	struct S3 s3;
//	double d;
//};
//
//int main()
//{
//	//struct S1 s1 = {0};//8
//	//struct S2 s2 = { 0 };//12
//
//	//printf("%zd\n", sizeof(struct S1));//8
//	//printf("%zd\n", sizeof(struct S2));
//	//printf("%zd\n", sizeof(struct S3));
//	//printf("%zd\n", sizeof(struct S4));
//	//printf("%zd\n", offsetof(struct S1, c1));
//	//printf("%zd\n", offsetof(struct S1, c2));
//	//printf("%zd\n", offsetof(struct S1, i));
//
//	//printf("%zd\n", offsetof(struct S2, c1));
//	//printf("%zd\n", offsetof(struct S2, i));
//	//printf("%zd\n", offsetof(struct S2, c2));
//	printf("%zd\n", offsetof(struct S4, c1));
//	printf("%zd\n", offsetof(struct S4, s3));
//	printf("%zd\n", offsetof(struct S4, d));
//
//	return 0;
//}
//

//#pragma pack(1)
//struct S1
//{
//	char c1;
//	char c2;
//	int i;
//};
//#pragma pack()
//
//
//int main()
//{
//	printf("%d\n", sizeof(struct S1));
//	return 0;
//}


//
//struct S
//{
//    int data[1000];
//    int num;
//};
//
//void print1(struct S t)
//{
//    printf("%d %d\n", t.data[0], t.num);
//}
//
//void print2(const struct S* ps)
//{
//    printf("%d %d\n", ps->data[0], ps->num);
//}
//
//int main()
//{
//    struct S s = { {1,2,3,4,5}, 100};
//    print1(s);
//    print2(&s);
//
//
//    return 0;
//}


//struct A
//{
//    int _a : 2;
//    int _b : 5;
//    int _c : 10;
//    int _d : 30;
//};
//
//
//int main()
//{
//    printf("%d\n", sizeof(struct A));
//    return 0;
//}
//
//struct S
//{
//    char a : 3;
//    char b : 4;
//    char c : 5;
//    char d : 4;
//};
//
//int main()
//{
//    struct S s = { 0 };
//    s.a = 10;
//    s.b = 8;
//    s.c = 3;
//    s.d = 4;
//    printf("%d\n", sizeof(s));
//    return 0;
//}
//

//union u
//{
//	char c;
//	int u;
//};
//
//int main()
//{
//	union u uu;
//	printf("%zd\n", sizeof(uu));
//	printf("%p\n", &uu);
//	printf("%p\n", &(uu.c));
//	printf("%p\n", &(uu.u));
//
//	return 0;
//}

//union Un1
//{
//    char c[5];//5
//    //1 8 1
//    int i;//4 8 4
//};
//
//union Un2
//{
//    short c[7];//14
//    int i;//4
//};
//
//int main()
//{
//    printf("%zd\n", sizeof(union Un1));//8
//    printf("%zd\n", sizeof(union Un2));//16
//
//    return 0;
//}

//union U
//{
//	int n;//4
//	struct S
//	{
//		char c1;
//		char c2;
//		char c3;
//		char c4;
//	}s;//4
//};
//
//int main()
//{
//
//	union U u = { 0 };
//	u.n = 0x11223344;
//	printf("%x %x %x %x\n", u.s.c1, u.s.c2, u.s.c3, u.s.c4);
//
//	return 0;
//}
//

//写一个代码，判断当前机器是大端还是小端？
//int check_sys()
//{
//	int n = 1;//01 00 00 00     00 00 00 01
//	return *(char*)&n;
//}

//int check_sys()
//{
//	union
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端\n");
//	else
//		printf("大端\n");
//	return 0;
//}
//

//枚举的关键字
//enum Sex
//{
//	//这里列举枚举enum Sex的可能取值
//	//这些可能取值是常量，也叫枚举常量
//	MALE=5,
//	FEMALE=8,
//	SECRET=10
//};
//
////#define MALE 5
//#define MAX 10
//
//
//int main()
//{
//
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	enum Sex s = MALE;
//	s = FEMALE;
//
//	return 0;
//}
//

