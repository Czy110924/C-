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
	printf("------ɨ����Ϸ------\n");
	//��ӡ�к�
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
	printf("------ɨ����Ϸ------\n");
}


void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//����10����
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
	//�����Ų�����
	//������� - ����λ��Ϊ"1" - �㱻ը����
	//������   - ����λ��Ϊ"0" - ��Ϸ����
			//ͳ���Ų�������Χ���� - ���浽show����
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row*col- easecount)
	{
		printf("��������Ҫ�Ų������ =��");
		scanf("%d %d", &x, &y);
		//�ж�����Ϸ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("�㱻ը���ˣ�GAME  OVER !!!\n");
				break;
			}
			else
			{
				//�����׵����
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				//DisPlayboard(mine, ROW, COL);//��Ų��úõ��׵���Ϣ
				DisPlayboard(show, ROW, COL);//��Ų��úõ��׵���Ϣ
				win++;
			}
		}
		else
		{
			printf("����������������������꣡");
		}
	}
	if (win == row * col - easecount)
	{
		printf("��ϲ��Ӯ�ˣ�����\n");
	}



}









