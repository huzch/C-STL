#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int n = 10;
//	char* pc = (char*)&n;
//	int* pi = &n;
//
//	printf("%p\n", &n);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	printf("%p\n", pi);
//	printf("%p\n", pi + 1);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	//int* pa = &a;
//	//char* pc = &a;
//	void* pa = &a;
//	void* pc = &a;
//
//	*pa = 10;
//	*pc = 0;
//	return 0;
//}

//int main()
//{
//	const int n = 0;
//	printf("n = %d\n", n);
//	int* const p = &n;
//	*p = 20;
//	printf("n = %d\n", n);
//	return 0;
//}

//int main()
//{
//	//ָ��-ָ�� = ��ַ-��ַ
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%d\n", &arr[0] - &arr[9]);
//	//9 - ָ��-ָ��ľ���ֵ��ָ���ָ��֮���Ԫ�ظ���
//	//ָ��-ָ�������ǰ�������ǣ�����ָ��ָ��ͬһ��ռ�
//
//	char ch[20] = {0};
//	printf("%d\n", &ch[0] - &arr[0]);//err
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//10
//	//ʹ��whileѭ����ӡarr������
//	int*p = &arr[0];
//	//arr������������������ʵ��������Ԫ�صĵ�ַ��arr<==>&arr[0]
//	while (p < arr + sz)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

int main()
{
	int arr[10] = { 1,2,3,4,5,67,7,8,9,10 };
	int* p = &arr[0];
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p++) = i;
	}
	//��ʱp�Ѿ�Խ���ˣ����԰�p��ΪNULL
	p = NULL;
	//�´�ʹ?��ʱ���ж�p��ΪNULL��ʱ����ʹ?
	//...
	p = &arr[0];//������p��õ�ַ
	if (p != NULL) //�ж�
	{
		//...
	}
	return 0;
}