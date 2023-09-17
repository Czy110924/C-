#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"



void IntBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}


void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//�����һ������Ϊһ��ѭ����ӡ
		//��if���������һ�к��߲��ô�ӡ
		//ͬ��ѭ����ӡÿһ�У���if�������һ�����߲��ô�ӡ
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		
		if (i < row - 1)
		{
			int m = 0;
			for (m = 0; m < col; m++)
			{
				printf("---");
				if (m < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}


void Playermove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x = 0;
		int y = 0;
		printf("��������壬�������� >\n");
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (board[x - 1][y - 1] == '*')
			{
				printf("�����ѱ�ռ�ã�����������\n");
				break;
			}
			else
			{
				board[x - 1][y - 1] = '*';
				break;
			}
		}
		else
		{
			printf("�����������������\n");
		}
	}


}


void Computermove(char board[ROW][COL], int row, int col)
{
	printf("��������\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '@';
			break;
		}
	}

}


int isFull(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;
				break;
			}
			
		}
	}
	return 1;
}

char isWin(char board[ROW][COL], int row, int col)
{
/*  ���Ӯ - *
	����Ӯ - @
	ƽ��   - Q
	����   - C   */
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			//���� - �ж���Ӯ
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			{
				return board[i][1];
			}

			//���� - �ж���Ӯ
			if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			{
				return board[1][i];
			}
		}
	}
	//��б - �ж���Ӯ
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//��б - �ж���Ӯ
	if (board[0][3] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}

	//�ж��Ƿ�����  ���˷���1  ���򷵻�0
	int ret = isFull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}

	return 'C';
}


















