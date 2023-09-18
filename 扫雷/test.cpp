#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"




void menu() {
	printf("******************************\n");
	printf("**********  1.play  **********\n");
	printf("**********  0.exit  **********\n");
	printf("******************************\n");
}

void game()
{
	//设置两个数组，分别存放雷的信息和排查出的雷的信息
	//若想设计9*9的棋盘，数组要设计称11*11，防止排查时越界排查
	//上下左右分别多一行一列，就可以排查每一个坐标的周围八格

	char mine[ROWS][COLS] = {0};//存放布置好的雷的信息
	char show[ROWS][COLS] = {0};//存放排查好的雷的信息

	//棋盘初始化
	IntBoard(mine, ROWS, COLS, '0');
	IntBoard(show, ROWS, COLS, '*');

	//棋盘打印
	DisPlayboard(mine, ROW, COL);
	DisPlayboard(show, ROW, COL);



}


int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：> ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}


	} while (input);
	return 0;
}































