#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	printf("hehe\n");
	return 0;
}
//����+����+����  ctrl+f5

//��ʽд��
void main()
{

}

//void �Ǳ�ʾmain���������ܲ���
int main(void)
{
	//����
	return 0;
}


//main������ʵҲ�����в�������������������

int main(int argc, char* argv[], char* envp[])
{

	return 0;
}

//stdio -- standard input output
//��׼�������ͷ�ļ�

int main()
{
	//printf��һ������
	//�⺯��
	//���ܣ�����Ļ�ϴ�ӡ��Ϣ
	//
	//scanf - ����
	printf("hello world\n");//���
	return 0;
}
//ע��ѡ���� ctrl+k+c
//ȡ��ע�� ctrl+k+u

int main()
{
	//ռλ��
	//%d - ����
	//%c - �ַ�
	//%f - ������
	printf("%d\n", 100);
	printf("%c\n", 'q');
	printf("%f\n", 3.14);
}

int main()
{
	int i = 0;
	for (i = 32; i <= 127; i++)
	{
		printf("%c ", i);
	}
	return 0;
}

int main()
{
	//%s - �ַ���
	printf("%s\n", "hello");
	return 0;
}

//�ַ�������һ��������־��\0
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };

	printf("%s\n", arr1);
	printf("%s\n", arr2);

	printf("abc\0def");
	return 0;
}

