#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int num = 10;
//	int n = num >> 1;
//	printf("num=%d\nn=%d\n", num, n);
//	return 0;
//}

//int main()
//{
//	int m = -3;
//	int n = m << 30;
//	//���ƻ�ֱ�Ӷ�������λ
//	printf("m=%d\nn=%d\n", m, n);
//	return 0;
//}

//int main()
//{
//	int a = 5 ^ 4 ^ 6 ^ 3 ^ 4 ^ 5 ^ 3;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = ~a;
//	//��λȡ��
//	//ȫ��ȡ������������λ
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d\nb=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = -3;
//	int b = 5;
//	printf("%d\n", a & b);
//	printf("%d\n", a | b);
//	printf("%d\n", a ^ b);
//	return 0;
//}

//int main()
//{
//	int num = 10;//signed int num = 10;
//	//10�Ǵ�������ͱ���num�У�ռ4���ֽ� == 32bitλ
//	//00000000000000000000000000001010  - ԭ��
//	//00000000000000000000000000001010  - ����
//	//00000000000000000000000000001010  - ����
//
//	int num2 = -10;
//	//-10�Ǵ�������ͱ���num2�У�ռ4���ֽ� == 32bitλ
//	//10000000000000000000000000001010  - ԭ��
//	//11111111111111111111111111110101  - ����
//	//11111111111111111111111111110110  - ����
//
//
//	return 0;
//}
//
//
//1-1
//1+(-1)
//00000000000000000000000000000001   ---> 1��ԭ��
//10000000000000000000000000000001   ---> -1��ԭ��
//10000000000000000000000000000010   -> -2
//
//ʹ�ò���Ϳ���
//00000000000000000000000000000001   ---> 1�Ĳ���
//10000000000000000000000000000001
//11111111111111111111111111111110
//11111111111111111111111111111111 ----> -1�Ĳ���
//00000000000000000000000000000001
//00000000000000000000000000000000 ---> 0
//

//
//int main()
//{
//	int m = 10;
//	int n = m << 1;
//
//	printf("n = %d\n", n);
//	printf("m = %d\n", m);
//
//	return 0;
//}
//

//
//int main()
//{
//	int m = -10;
//	int n = m >> 1;
//	//10000000000000000000000000001010 
//	//11111111111111111111111111110101
//	//11111111111111111111111111110110
//	//n = m>>1
//	//11111111111111111111111111111011
//	//10000000000000000000000000000100
//	//10000000000000000000000000000101
//	//-5
//	printf("m = %d\n", m);
//	printf("n = %d\n", n);
//
//	return 0;
//}



//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a & b;
//	//����2���ƣ�λ��
//	//������򣺶�Ӧ�Ķ�����λ����������
//	//ֻҪ��0����0������ͬʱΪ1����1
//	//00000000000000000000000000000011 --- 3�Ĳ���
//	//10000000000000000000000000000101 --- -5��ԭ��
//	//11111111111111111111111111111010 ����
//	//11111111111111111111111111111011 --- -5�Ĳ���
//	//00000000000000000000000000000011 --- 3�Ĳ���
//	//00000000000000000000000000000011
//	printf("c = %d\n", c);
//	
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a | b;
//	//����2���ƣ�λ��
//	//������򣺶�Ӧ�Ķ�����λ���л�����
//	//ֻҪ��1����1������ͬʱΪ0����0
//	//00000000000000000000000000000011 --- 3�Ĳ���
//	//10000000000000000000000000000101 --- -5��ԭ��
//	//11111111111111111111111111111010 ����
//	//11111111111111111111111111111011 --- -5�Ĳ���
//	//00000000000000000000000000000011 --- 3�Ĳ���
//	//11111111111111111111111111111011
//	//
//	printf("c = %d\n", c);
//
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = -5;
//	int c = a ^ b;
//	//����2���ƣ�λ���
//	//������򣺶�Ӧ�Ķ�����λ�����������
//	//��ͬΪ0������Ϊ1
//	// 
//	//00000000000000000000000000000011 --- 3�Ĳ���
//	//10000000000000000000000000000101 --- -5��ԭ��
//	//11111111111111111111111111111010 ����
//	//11111111111111111111111111111011 --- -5�Ĳ���
//	//00000000000000000000000000000011 --- 3�Ĳ���
//	//11111111111111111111111111111000
//	//10000000000000000000000000000111
//	//10000000000000000000000000001000
//	//
//	printf("c = %d\n", c);
//
//	return 0;
//}

//~ - ��λȡ��

//int main()
//{
//	int a = 1;
//	int b = ~a;
//	//00000000000000000000000000000001 -- 1�Ĳ���
//	//11111111111111111111111111111110�����룩
//	//10000000000000000000000000000001
//	//10000000000000000000000000000010 > -2
//	//
//	printf("%d\n", b);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//10000000000000000000000000000000
//	//10000000000000000000000000000001 -1
//	int b = ~a;
//
//	printf("%d\n", b);
//
//	return 0;
//}
//
//
int main()
{
	int a = 3;
	int b = 5;
	//����a��b��ֵ
	printf("a=%d b=%d\n", a, b);
	//int c = a;
	//a = b;
	//b = c;

	//a = a + b;
	//b = a - b;
	//a = a - b;
	//����д����ȱ���ǣ�a��b����ǳ�����ͺ�Ľ�����������͵����ֵ

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("a=%d b=%d\n", a, b);
	return 0;
}

//
//�����������ص㣺
//a^a = 0
//0^a = a
//
//3^3^5 = 5
//3^5^3 = 5
//
//011
//101
//110
//011
//101


//int main()
//{
//	int a = -1;
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	printf("%d\n", count);
//
//	return 0;
//}

//ʲôʱ����Ҫ�����������أ�

//int count_one_bit(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//��һ�������洢���ڴ��еĶ�������1�ĸ���
//	int n = count_one_bit(num);
//	printf("%d\n", n);
//
//	return 0;
//}



//int count_one_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	//��һ�������洢���ڴ��еĶ�������1�ĸ���
//	int n = count_one_bit(num);
//	printf("%d\n", n);
//
//	return 0;
//}


//n = n&(n-1)
//Ч������n�Ķ����������ұߵ�1ȥ����
// 
//n=15
//1111 - n
//1110 - n-1
//1110 - n
//1101 - n-1
//1100 - n
//1011 - n-1
//1000 - n
//0111 - n-1
//0000 - n

//
//�ж�һ����n�Ƿ���2�Ĵη���
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	if ((n & (n - 1)) == 0)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//
//	return 0;
//}

//000001
//000010
//000100
//001000
//....

//int main()
//{
//	int n = 13;
//	n = n | (1 << 4);
//	printf("%d\n", n);
//	n = n & ~(1 << 4);
//	printf("%d\n", n);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);//���ű���ʽ
//	
//	printf("%d\n", c);
//
//	return 0;
//}
//
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void test()
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	//int arr[10] = { 0 };
//	//arr[5] = 6;//[] - �±����ò�����
//	// arr �� 5������������
//	int c = Add(3, 5);//()�������ò����� - �������Ͳ������ǲ�����
//	test();//()�������ò�����
//	printf("hehe\n");
//	return 0;
//}
//


//sizeof�ǲ����������Ǻ���
//
//int main()
//{
//	int a = 10;
//	printf("%zd\n", sizeof(a));
//	printf("%zd\n", sizeof a);
//
//	return 0;
//}