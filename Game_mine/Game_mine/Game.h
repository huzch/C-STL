#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define SIZE 10

//��ʼ������
void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set);
//��ӡ����
void DisplayBoard(char arr[ROWS][COLS], int row, int col);
//������
void SetMine(char arr[ROWS][COLS], int row, int col);
//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);