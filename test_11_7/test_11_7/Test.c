#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//������һ��ѧ��
//����+����+�ɼ�
//
//struct Stu
//{
//	char name[20];
//	int age;
//	float score;
//} s3 = { "wangwu", 33, 66.0f }, s4 = {"�仨", 18, 100.0f};//ȫ�ֱ���
//
//int main()
//{
//	struct Stu s1 = {"zhangsan", 20, 95.5f};//�ֲ�����
//	struct Stu s2 = {"lisi", 18, 87.5f};
//	struct Stu s5 = {.score= 98.5f, .name="hehe", .age = 18};
//
//	//. �ṹ��Ա���ʲ�����
//	//�ṹ�����.��Ա��
//	//
//	printf("%s %d %f\n", s1.name, s1.age, s1.score);
//	printf("%s %d %f\n", s4.name, s4.age, s4.score);
//
//
//	//�ṹ��ָ��
//	struct Stu* ps = &s1;//ȡ��s1�ĵ�ַ
//	printf("%s %d %f\n", ps->name, ps->age, ps->score);
//	//�ṹ��ָ��->��Ա��
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
//	//char���͵�ȡֵ��Χ��-128~127
//	//char ��ռ��1���ֽڵģ�1���ֽ���8��bitλ
//	char c1 = 125;
//	//00000000000000000000000001111101
//	//�����ض�
//	//01111101 -c1
//	//
//	char c2 = 10;
//	//00000000000000000000000000001010
//	//00001010 -c2
//	//
//	//00000000000000000000000001111101 -c1 - �з��ŵ�char
//	//00000000000000000000000000001010 -c2 - �з��ŵ�char
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
//	//%d �Ǵ�ӡ�з��ŵ�����
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
//    printf("%d\n", answer);//������٣�
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
//	//printf("%p\n", &a);//&ȡ��ַ������
//	int * pa = &a;//pa ��ָ����� - ��ŵ�ַ - ��ַ�ֱ���Ϊָ�룬ָ��������������ָ���
//
//	//int* pa;
//	//int *pa;
//	//int * pa;
//
//	return 0;
//}

//
//ָ�� �� ָ�����
//��ַ    ����-��ŵ�ַ
//
//��ͷ���У�˵��ָ��һ����ָ�����
//


//&      ----   *
//ȡ��ַ         �����ò�����
//
//int main()
//{
//	int a = 10;
//	int * pa = &a;
//	*pa = 20;//* �ǽ����ò�����,*pa �ȼ���a
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
	int* pa = &a;       //ȡ��a�ĵ�ַ���洢��ָ�����pa��

	return 0;
}