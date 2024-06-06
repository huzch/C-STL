#define _CRT_SECURE_NO_WARNINGS 1
#include"Game.h"

void InitBoard(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}
}

void DisplayBoard(char arr[ROWS][COLS], int row, int col)
{
	int i = 0;
	printf("*****************************\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d |", i);//打印行号
	}
	printf("\n");

	for (i = 0; i <= row; i++)
	{
		printf("--|");
	}
	printf("\n");

	for (i = 1; i <= row; i++)
	{
		int j = 0;
		printf("%d |", i);//打印列号
		for (j = 1; j <= col; j++)
		{
			printf("%c |", arr[i][j]);
		}
		printf("\n");

		for (j = 0; j <= row; j++)
		{
			printf("--|");
		}
		printf("\n");
	}
	printf("*****************************\n");
}

void SetMine(char arr[ROWS][COLS], int row, int col)
{
	int count = SIZE;
	while (count)
	{
		//每成功布置一个雷，count--
		int x = rand() % row + 1;//1-9
		int y = rand() % col + 1;//1-9

		if (arr[x][y] == '0')
		{
			arr[x][y] = '1';
			count--;
		}
	}
}

static int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	int sum = 0;
	int i = 0;
	for (i = -1; i <= 1; i++)
	{
		int j = 0;
		for (j = -1; j <= 1; j++)
		{
			sum += mine[x + i][y + j];
		}
	}
	return sum - 9 * '0';
}

void Spread(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int* pw)
{
	if (x < 1 || x > ROW || y < 1 || y > COL)
	{
		return;
	}

	if (show[x][y] != '*')
	{
		return;
	}

	int n = GetMineCount(mine, x, y);
	(*pw)++;

	if (n == 0)
	{
		show[x][y] = ' ';

		for (int i = -1; i <= 1; i++)
		{
			for (int j = -1; j <= 1; j++)
			{
				Spread(mine, show, x + i, y + j, pw);
			}
		}
	}
	else
	{
		show[x][y] = n + '0';
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;

	while (win < row * col - SIZE)
	{
		printf("请输入坐标:");
		scanf("%d%d", &x, &y);
		//system("cls");
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				Spread(mine, show, x, y, &win);
				DisplayBoard(show, ROW, COL);
			}
		}
		else
		{
			printf("输入坐标非法，请重新选择\n");
		}
	}

	if (win == row * col - SIZE)
	{
		printf("恭喜你，排雷成功\n");
		DisplayBoard(mine, ROW, COL);
	}
}