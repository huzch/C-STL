#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));
//	//��ַ��������48
//	printf("%d\n", sizeof(a[0][0]));
//	//Ԫ�أ�4
//	printf("%d\n", sizeof(a[0]));
//	//��ַ��������16
//	printf("%d\n", sizeof(a[0] + 1));
//	//��ַ��4/8
//	printf("%d\n", sizeof(*(a[0] + 1)));
//	//Ԫ�أ�4
//	printf("%d\n", sizeof(a + 1));
//	//��ַ��4/8
//	printf("%d\n", sizeof(*(a + 1)));
//	//Ԫ�أ�16
//	printf("%d\n", sizeof(&a[0] + 1));
//	//��ַ��4/8
//	printf("%d\n", sizeof(*(&a[0] + 1)));
//	//Ԫ�أ�16
//	printf("%d\n", sizeof(*a));
//	//Ԫ�أ�16
//	printf("%d\n", sizeof(a[3]));
//	//��ַ��������16
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
//	printf("%zd\n", sizeof(arr + 0));//arr+0��������Ԫ�صĵ�ַ����ַ�Ĵ�С��4/8���ֽ�
//	printf("%zd\n", sizeof(*arr));//*arr���������Ԫ�أ�������������Ԫ�صĴ�С 1
//	printf("%zd\n", sizeof(arr[1]));//1
//	printf("%zd\n", sizeof(&arr));//&arr - ������ĵ�ַ������ĵ�ַҲ�ǵ�ַ���ǵ�ַ����4/8���ֽ�
//	printf("%zd\n", sizeof(&arr + 1));//&arr+1�������������飬ָ��������ĺ�ߣ�4/8
//	printf("%zd\n", sizeof(&arr[0] + 1));//&arr[0] + 1�ǵڶ���Ԫ�صĵ�ַ 4/8
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//
//	printf("%zd\n", strlen(arr));//arrҲ��������Ԫ�صĵ�ַ 6
//	printf("%zd\n", strlen(arr + 0));//arr + 0��������Ԫ�صĵ�ַ��6
//	//printf("%zd\n", strlen(*arr));//��������'a'-97,//err
//	//printf("%zd\n", strlen(arr[1]));//?'b'-98//err
//	printf("%zd\n", strlen(&arr));//6, &arr��Ȼ������ĵ�ַ������Ҳ��ָ���������ʼλ��
//	printf("%zd\n", strlen(&arr + 1));//���ֵ
//	printf("%zd\n", strlen(&arr[0] + 1));//&arr[0] + 1�ǵڶ���Ԫ�صĵ�ַ - 5
//
//	return 0;
//}
//
//int main()
//{
//	char* p = "abcdef";
//	printf("%zd\n", sizeof(p));//4/8 �����ָ������Ĵ�С
//	printf("%zd\n", sizeof(p + 1));//p + 1��'b'�ĵ�ַ���ǵ�ַ��С����4/8���ֽ�
//	printf("%zd\n", sizeof(*p));//*p����'a'����С��1���ֽ�
//	printf("%zd\n", sizeof(p[0]));//p[0]--> *(p+0) - *p //1�ֽ�
//	printf("%zd\n", sizeof(&p));//&pҲ�ǵ�ַ����ָ�����p�ĵ�ַ����СҲ��4/8���ֽ�
//	printf("%zd\n", sizeof(&p + 1));//&p + 1��ָ��pָ���������Ŀռ䣬Ҳ�ǵ�ַ����4/8���ֽ�
//	printf("%zd\n", sizeof(&p[0] + 1));//&p[0]+1��'b'�ĵ�ַ���ǵ�ַ����4/8���ֽ�
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
//	printf("%zd\n", strlen(&p));//���ֵ
//	printf("%zd\n", strlen(&p + 1));//���ֵ
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
//	//��ά����Ҳ�����飬֮ǰ�����������Ҳ���ʺ�
//	int a[3][4] = { 0 };
//	printf("%zd\n", sizeof(a));//12*4 = 48���ֽڣ���������������sizeof�ڲ�
//	printf("%zd\n", sizeof(a[0][0]));//4
//	printf("%zd\n", sizeof(a[0]));//a[0]�ǵ�һ�����һά���������������������������sizeof�ڲ���
//	//������ǵ�һ�еĴ�С����λ���ֽڣ�16���ֽ�
//
//	printf("%zd\n", sizeof(a[0] + 1));//a[0]��һ�����һά�����������,�����ʾ������Ԫ��
//	//Ҳ����a[0][0]�ĵ�ַ��a[0] + 1��a[0][1]�ĵ�ַ 4/8
//
//	printf("%zd\n", sizeof(*(a[0] + 1)));//a[0][1] - 4���ֽ�
//	printf("%zd\n", sizeof(a + 1));//a�Ƕ�ά�����������������û��&��Ҳû�е�������sizeof�ڲ�
//	//���������a��������Ԫ�صĵ�ַ��Ӧ���ǵ�һ�еĵ�ַ��a+1�ǵڶ��еĵ�ַ
//	//��СҲ��4/8 ���ֽ�
//	printf("%zd\n", sizeof(*(a + 1)));//*(a + 1) ==> a[1] - �ڶ��е�����������������sizeof�ڲ���������ǵڶ��еĴ�С
//	//16���ֽ�
//	printf("%zd\n", sizeof(&a[0] + 1));//&a[0]�ǵ�һ�еĵ�ַ��&a[0]+1���ǵڶ��еĵ�ַ��4/8
//	printf("%zd\n", sizeof(*(&a[0] + 1)));//���ʵ��ǵڶ��У�������ǵڶ��еĴ�С��16���ֽ�
//	//int(*p)[4] = &a[0] + 1;
//	//
//	printf("%zd\n", sizeof(*a));//�����a�ǵ�һ�еĵ�ַ��*a���ǵ�һ�У�sizeof(*a)������ǵ�һ�еĴ�С-16
//	//*a --> *(a+0) --> a[0]
//	printf("%zd\n", sizeof(a[3]));//���ﲻ����Խ��
//	//��Ϊsizeof�ڲ��ı��ʽ������ʵ�����
//	//������ǵ����еĴ�С-16
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



//��X86������
//����ṹ��Ĵ�С��20���ֽ�
//��������Ľ����ɶ��

//struct Test
//{
//    int Num;
//    char* pcName;
//    short sDate;
//    char cha[2];
//    short sBa[4];
//}* p = (struct Test*)0x100000;
////
////ָ��+����
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
//    //ע�ⶺ�ű��ʽ
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}
//

//���軷����x86��������������Ľ����ɶ��
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
//		printf("��д\n");
//	}
//	else if (ch >= 'a' && ch <= 'z')
//	{
//		printf("Сд\n");
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
//	//	printf("Сд\n");
//	//}
//	//else if (isupper(ch))
//	//{
//	//	printf("��д\n");
//	//}
//
//	return 0;
//}

//��һ���ַ���ת����ȫСд

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