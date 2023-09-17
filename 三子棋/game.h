#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//变量这样写方便修改
#define ROW 3
#define COL 3


//函数的声明

//初始化棋盘
void IntBoard(char board[ROW][COL], int row, int col);

//输出棋盘 - 实质是打印数组的内容
void DisplayBoard(char board[ROW][COL], int row, int col);

//玩家走棋
void Playermove(char board[ROW][COL], int row, int col);

//电脑走棋
void Computermove(char board[ROW][COL], int row, int col);

//判断输赢
char isWin(char board[ROW][COL], int row, int col);











