#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//��������д�����޸�
#define ROW 3
#define COL 3


//����������

//��ʼ������
void IntBoard(char board[ROW][COL], int row, int col);

//������� - ʵ���Ǵ�ӡ���������
void DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void Playermove(char board[ROW][COL], int row, int col);

//��������
void Computermove(char board[ROW][COL], int row, int col);

//�ж���Ӯ
char isWin(char board[ROW][COL], int row, int col);











