#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void menu()
{
	printf("********************\n");
	printf("*******1-play-******\n");
	printf("*******0-exit-******\n");
	printf("********************\n");
}

void game()
{
	//�洢���� - ��ά����
	char board[ROW][COL];
	
	//��ʼ������ - ��ʼ���ո�
	IntBoard(board, ROW, COL);

	//������� - ʵ���Ǵ�ӡ���������
	DisplayBoard(board, ROW, COL);

	char ret;
	while (1)
	{
		//�������
		Playermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//�ж���Ӯ
		ret = isWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}


		//��������
		Computermove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);

		//�ж���Ӯ
		ret = isWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

	}
	if (ret == '*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret == '@')
	{
		printf("����Ӯ��\n");
	}
	else if(ret == 'Q')
	{
		printf("ƽ��\n");
	}
}



int main()
{
	srand((unsigned int)time(NULL));
	int input = 1;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("�˳���Ϸ\n");
				break;
			default:
				printf("ѡ�����������ѡ��\n");
				break;
		}
	} while (input);
	return 0;
}