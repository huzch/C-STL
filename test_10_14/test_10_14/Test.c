#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//Ҫ������һ���������ж������������0�������������߸�����

//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	//�ж�
//	if (num == 0)
//		printf("�����ֵ��0\n");
//	else
//	{
//		if (num > 0)
//			printf("�����ֵ������\n");
//		else
//			printf("�����ֵ�Ǹ���\n");
//	}
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	//����
//	scanf("%d", &num);
//	//�ж�
//	if (num == 0)
//		printf("�����ֵ��0\n");
//	else if (num > 0)
//			printf("�����ֵ������\n");
//	else
//		printf("�����ֵ�Ǹ���\n");
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
//			printf("ż��\n");
//		else
//			printf("����\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//}
//

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age < 18)
//		printf("����\n");
//	else
//	{
//		if (age <= 44)
//			printf("����\n");
//		else
//		{
//			if (age <= 59)
//				printf("������\n");
//			else
//			{
//				if (age <= 89)
//					printf("����\n");
//				else
//					printf("������\n");
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
//		printf("����\n");
//	else if (age <= 44)
//		printf("����\n");
//	else if (age <= 59)
//		printf("������\n");
//	else if (age <= 89)
//		printf("����\n");
//	else
//		printf("������\n");
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

//��������C/C++��̡�
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
//	if (a > 5);//������Ϸֺţ�if���Ƶľ�������ֺ�
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
//	//���һ��������һ�������Ƚ���ȣ����齫��������==�����
//	if (5 == a)//��ֵ
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
//	if (x<y && y<z)//&& ����
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
//		printf("����\n");
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
//	//���flagΪ�٣�Ҫ��ӡ�Ǻ�
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
//		printf("����\n");
//
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 1 || month == 2 || month == 12)
//		printf("����\n");
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
//			printf("����\n");
//	}
//	if (year % 400 == 0)
//	{
//		printf("����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (((year % 4 == 0) && (year % 100 != 0))||(year % 400 == 0))
//	{
//			printf("����\n");
//	}
//	else
//	{
//		printf("��������\n");
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
//		printf("��3����������Ϊ0\n");
//	else if (num % 3 == 1)
//		printf("������1\n");
//	else
//		printf("������2\n");
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
//		printf("������1\n");
//		break;
//	case 2:
//		printf("������2\n");
//		break;
//	case 0:
//		printf("������0\n");
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
//	scanf("%c", &ch);//�ַ�����ASCII�����ʽ���д洢�ģ�ASCIIֵ���������ַ��������ͼ���
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
//	case m://���ͳ������ʽ����
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
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
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
//	//��ѭ��
//	while (1)
//		printf("hehe\n");
//
//	return 0;
//}


//int main()
//{
//	//1 2 3 4 5 6 7 8 9 10
//
//	int i = 1;//��ʼ��
//
//
//	while (i <= 10)//�ж�
//	{
//		printf("%d ", i);
//		i++;//++i;//����
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
//		//ÿһ��ѭ���������i
//		//�ж�i�Ƿ���3�ı���
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