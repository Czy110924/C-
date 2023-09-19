#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"



void IntBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}


void DisPlayboard(char board[ROWS][COLS], int row, int col)
{
	printf("------扫雷游戏------\n");
	//打印列号
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------扫雷游戏------\n");
}


void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//布置10个雷
	int count = easecount;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}

}

int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}



void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//输入排查坐标
	//如果是雷 - 坐标位置为"1" - 你被炸死了
	//不是雷   - 坐标位置为"0" - 游戏继续
			//统计排查坐标周围的雷 - 储存到show数组
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col- easecount)
	{
		printf("请输入你要排查的坐标 =》");
		scanf("%d %d", &x, &y);
		//判断坐标合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了！GAME  OVER !!!\n");
				break;
			}
			else
			{
				//不是雷的情况
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				//DisPlayboard(mine, ROW, COL);//存放布置好的雷的信息
				DisPlayboard(show, ROW, COL);//存放布置好的雷的信息
				win++;
			}
		}
		else
		{
			printf("坐标错误，请重新输入新坐标！");
		}
	}
	if (win == row * col - easecount)
	{
		printf("恭喜你赢了！！！\n");
	}



}









