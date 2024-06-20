#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"

void ContactTest3()
{
	Contact con;
	ContactInit(&con);

	ContactInsert(&con, 0);
	ContactInsert(&con, 1);
	ContactInsert(&con, 2);
	ContactInsert(&con, 0);
	ContactPrint(&con);

	size_t pos = ContactFind(&con);
	ContactErase(&con, pos);
	ContactPrint(&con);

	ContactDestroy(&con);
}

void ContactTest2()
{
	Contact con;
	ContactInit(&con);

	ContactInsert(&con, 0);
	ContactInsert(&con, 0);
	ContactPrint(&con);

	ContactErase(&con, 0);
	ContactPrint(&con);

	ContactDestroy(&con);
}

void ContactTest1()
{
	Contact con;
	ContactInit(&con);

	ContactInsert(&con, 0);
	ContactInsert(&con, 0);
	ContactInsert(&con, 0);

	ContactPrint(&con);

	ContactDestroy(&con);
}

int main()
{
	ContactTest3();
	return 0;
}