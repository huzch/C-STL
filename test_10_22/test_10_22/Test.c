#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��ӡ 0 - 10
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

//�ж�һ����������λ��
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
//	//���Ϊwhileѭ������count=1
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

//������
//����1 ������ⷨ
#include<math.h>

int main()
{
	int i = 0;
	int count = 0;
	for (i = 1001; i <= 2000; i += 2)//ֻ�ж�����
	{
		//����1000-2000�ڵ�����
		//����iΪ����
		int flag = 1;
		int j = 0;
		for (j = 2; j <= sqrt(i); j++)//i�ֽܷ���������ӣ�����������һ������С�ڸ���i
		{
			//ֻҪi����������iǰ������˵������i��Ҳ��һ�����ܱ�����
			//���û�У����Ҳ����ܱ�������������iΪ����
			if (0 == (i % j))
			{
				flag = 0;//���ʱi��Ϊ����
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

//����2 ɸѡ��
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
	//ȥ��2��3��5�����ı���
	for (i = 2; i < 2000; i++)
	{
		if (arr[i])
		{
			if ((i >= 1000) && (i <= 2000))//���ô�ӡ����
			{
				count++;
				printf("%d ", i);
			}

			int j = 0;
			for (j = i * i; j < 2000; j += i)//��+�ĳ�*�������ظ�ɸѡ
			{
				arr[j] = 0;
			}
		}


	}
	printf("\ncount=%d\n", count);
	return 0;
}

//��Ч�����ж�
//6k+-1��
bool is_prime(int n)
{
	//2��3��������
	if (n == 2 || n == 3)
	{
		return 1;
	}
	//����6�ı�������ģ��϶���Ϊ����
	if ((n % 6) != 1 && (n % 6) != 5)
	{
		return 0;
	}
	//��6�ı�������Ҳ���ܲ�Ϊ����
	int i = 0;
	for (i = 5; i <= sqrt(n); i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return 0;
		}
	}
	//�ų����п��ܣ�ʣ��ľ�������
	return 1;
}

int main()
{
	//���������������ʣ�����2��3������ֻ�ֲܷ���6�ı���������
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
	//	printf("����\n");
	//}
	//else
	//{
	//	printf("������\n");
	//}
	return 0;
}


//��������Ϸ
#include<stdlib.h>
#include<time.h>

void game()
{
	int ret = rand() % 100 + 1;//1 - 100
	int count = 5;
	int guess = 0;
	printf("��ӭ������������Ϸ����һ����5�λش����\n");
	while (count)
	{
		printf("������:>");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("��С��\n");
		}
		else if (guess > ret)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("���ź��������ù���\n");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("���˳���Ϸ\n");
			break;
		default:
			printf("����Ƿ���������\n");
			break;
		}
	} while (input);
}

int main()
{
	test();
	return 0;
}