#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
#include<string.h>

size_t my_strlen1(const char* str)
{
	assert(str);
	int count = 0;

	while (*str++)
	{
		count++;
	}

	return count;
}

size_t my_strlen2(const char* str)
{
	assert(str);
	char* start = str;

	while (*str)
	{
		str++;
	}

	return str - start;
}

size_t my_strlen3(const char* str)
{
	assert(str);

	if (*str == '\0')
	{
		return 0;
	}

	return my_strlen3(str + 1) + 1;
}

void TestMyStrlen()
{
	char arr[] = "abcdef";
	size_t len = my_strlen3(arr);
	printf("%zd\n", len);
}

char* my_strcpy(char* dst, const char* src)
{
	assert(dst && src);
	char* ret = dst;

	while (*dst++ = *src++)
	{
		;
	}

	return ret;
}

void TestMyStrcpy()
{
	char arr1[20];
	char arr2[10] = "abcdefghi";
	printf("%s\n", my_strcpy(arr1, arr2));
}

char* my_strcat(char* dst, const char* src)
{
	assert(dst && src);
	char* ret = dst;

	while (*dst)
	{
		dst++;
	}

	while (*dst++ = *src++)
	{
		;
	}

	return ret;
}

void TestMyStrcat()
{
	char arr1[20] = "hello ";
	char arr2[10] = "abcdefghi";
	printf("%s\n", my_strcat(arr1, arr2));
}

int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);

	while (*str1 == *str2)
	{
		if (*str1 == '\0')
		{
			return 0;
		}

		str1++;
		str2++;
	}

	return *str1 - *str2;
}

void TestMyStrcmp()
{
	char arr1[] = "hello";
	char arr2[] = "world";
	printf("%d", my_strcmp(arr1, arr2));
}

void Test()
{
	char arr1[20] = "hello bit";
	char arr2[15] = "abcdefxxxxxxxx";
	//strncpy(arr1, arr2, 15);
	strncat(arr1, arr1, 7);
	strncmp(arr1, arr2, 10);
}

//暴力求解
char* my_strstr(const char* str1, const char* str2)
{
	assert(str1 && str2);
	const char* cur = str1;
	const char* dst = NULL;
	const char* src = NULL;

	if (*str2 == '\0')
	{
		return (char*)str1;
	}

	while (*cur)
	{
		dst = cur;
		src = str2;

		while (*dst == *src)
		{
			dst++;
			src++;
		}

		if (*src == '\0')
		{
			return (char*)cur;
		}

		cur++;
	}

	return NULL;
}

void TestMyStrstr()
{
	char arr1[20] = "aabbbcdddeffg";
	char arr2[10] = "defh";
	char* ret = my_strstr(arr1, arr2);
	if (ret)
	{
		printf("%s\n", ret);
	}
	else
	{
		printf("找不到\n");
	}
}


int main()
{
	//TestMyStrlen();
	//TestMyStrcpy();
	//TestMyStrcat();
	//TestMyStrcmp();
	//Test();
	TestMyStrstr();
	return 0;
}