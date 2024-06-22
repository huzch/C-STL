#define _CRT_SECURE_NO_WARNINGS 1
#include"Contact.h"

void ContactTest2()
{
	Contact* pc = NULL;
	ContactInsert(&pc, NULL);
	ContactInsert(&pc, NULL);
	ContactInsert(&pc, NULL);

	Contact* pos = ContactFind(pc);
	ContactErase(&pc, pos);

	ContactPrint(pc);
	ContactDestroy(&pc);
}

void ContactTest1()
{
	Contact* pc = NULL;
	ContactInsert(&pc, NULL);
	ContactInsert(&pc, NULL);
	ContactInsert(&pc, NULL);

	ContactPrint(pc);
	ContactDestroy(&pc);
}

int main()
{
	ContactTest2();
	return 0;
}