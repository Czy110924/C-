#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define easecount 10

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//��ʼ������
void IntBoard(char board[ROWS][COLS], int rows, int cols, char set);

//���̴�ӡ
void DisPlayboard(char board0[ROWS][COLS], int row, int col);

//������
void SetMine(char mine[ROWS][COLS], int row, int col);

//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);








