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
	printf("------É¨À×ÓÎÏ·------\n");
	for (int i = 1; i <= row; i++)
	{
		for (int j = 0; j <= col; j++)
		{
			printf(" %c", board[i][j]);
		}
		printf("\n");
	}
	printf("------É¨À×ÓÎÏ·------\n");
}















