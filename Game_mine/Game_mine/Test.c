#define _CRT_SECURE_NO_WARNINGS 1
#include"Game.h"

void menu()
{
	printf("***********************\n");
	printf("******  1.play  *******\n");
	printf("******  0.exit  *******\n");
	printf("***********************\n");
}

void game()
{
	char show[ROWS][COLS];
	char mine[ROWS][COLS];
	//初始化棋盘
	InitBoard(show, ROWS, COLS, '*');
	InitBoard(mine, ROWS, COLS, '0');
	//打印棋盘
	DisplayBoard(show, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//排查雷
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("已退出游戏\n");
			break;
		default:
			printf("输入非法，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}