#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	char arr[] = "zhangsan@163.com";
//	char tmp[20];
//	strcpy(tmp, arr);
//	const char* p = ".@";
//	char* s = NULL;
//
//	for (s = strtok(tmp, p); s != NULL; s = strtok(NULL, p))
//	{
//		printf("%s\n", s);
//	}
//
//	//printf("%s\n", strtok(tmp, p));
//	//printf("%s\n", strtok(NULL, p));
//	//printf("%s\n", strtok(NULL, p));
//	//printf("%s\n", strtok(NULL, p));
//
//	return 0;
//}

//дһ�������жϵ�ǰ�����Ǵ�˻���С��
//int Check_sys()
//{
//	union u
//	{
//		int i;
//		char c;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//
//int main()
//{
//	int ret = Check_sys();
//	if (ret == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	//printf("%#x\n", a.c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d: %s\n",i, strerror(i));
//	}
//
//	return 0;
//}

#include <errno.h>

//int main()
//{
//    FILE* pFile;
//    pFile = fopen("unexist.txt", "r");
//    if (pFile == NULL)
//        printf("Error opening file unexist.ent: %s\n", strerror(errno));
//    else
//        printf("���ļ��ɹ�\n");
//
//    return 0;
//}


//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//    FILE* pFile;
//    pFile = fopen("unexist.ent", "r");
//    if (pFile == NULL)
//        //printf("Error opening file unexist.ent: %s\n", strerror(errno));
//        perror("Error opening file unexist.ent");
//    return 0;
//}
//

#include <string.h>
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = {0};
//	//��arr1�е�1 2 3 4 5��������arr2��
//	memcpy(arr2, arr1, 5*sizeof(int));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	//��arr1�е�4 5 6 7 8��������arr2��
//	memcpy(arr2, arr1+3, 5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "he\0lo bit";
//	char arr2[10] = { 0 };
//	//��arr1�е�4 5 6 7 8��������arr2��
//	memcpy(arr2, arr1, 5);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%c ", arr2[i]);
//	}
//
//	return 0;
//}

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	while (num--)
//	{
//		*((char*)dest)++ = *((char*)src)++;
//		//dest = (char*)dest+1;
//		//src = (char*)src + 1;
//	}
//}
//
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 1 };
//	//��arr1�е�4 5 6 7 8��������arr2��
//	my_memcpy(arr2, arr1+3, 5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//
//	return 0;
//}
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//
void* my_memmove(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src);
	if (dest < src)
	{
		//ǰ->��
		while (num--)
		{
			*((char*)dest)++ = *((char*)src)++;
		}
	}
	else
	{
		//��->ǰ
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return ret;
}

int main()
{
	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr1, arr1 + 2, 5 * sizeof(int));
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);// 1 2 1 2 3 4 5 8 9 10
	}

	return 0;
}


//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	memcpy(arr1+2, arr1, 5 * sizeof(int));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);// 1 2 1 2 3 4 5 8 9 10
//	}
//
//	return 0;
//}

//memset - �ڴ�����
//int main()
//{
//	char arr[10] = "hello bit";
//	memset(arr, 'x', 5);
//	//memset �����õ�ʱ�������ֽ�Ϊ��λ�����õ�
//	//
//	printf("%s\n", arr);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	memset(arr, 1, 40);
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[] = { 1,2,3,4,8 };
//	int ret = memcmp(arr1, arr2, 17);
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;//0x 00 00 00 0a
//	int b = 0x11223344;
//
//	return 0;
//}


//
//дһ�����룬���жϵ�ǰ�����Ǵ�˻���С�ˣ�
//

//int main()
//{
//	int a = 1;
//	char* p = (char*)& a;
//	if (*p == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	if (*(char*)&a == 1)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//
//	return 0;
//}


//int check_sys()
//{
//	int a = 1;
//	//1. ȡ��a�ĵ�ַ
//	//2. ǿ������ת����char*������ã�ֻȡa�ĵ�һ���ֽڵ�����
//	//3. ���ȡ����1������С�ˣ�ȡ����0���Ǵ��
//	return *(char*)&a;
//}
//
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("С��\n");
//	else
//		printf("���\n");
//
//	return 0;
//}