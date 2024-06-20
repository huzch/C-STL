#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<string.h>

#define NAME_MAX 20
#define SEX_MAX 8
#define TEL_MAX 12
#define ADDR_MAX 20

typedef struct PersonInfo
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tel[TEL_MAX];
	char addr[ADDR_MAX];
}Info;

typedef struct Contact
{
	Info* arr;
	size_t size;
	size_t capacity;
}Contact;

void ContactInit(Contact* pc);
void ContactDestroy(Contact* pc);
void ContactPrint(Contact* pc);

void ContactInsert(Contact* pc, size_t pos);
void ContactErase(Contact* pc, size_t pos);
size_t ContactFind(Contact* pc);