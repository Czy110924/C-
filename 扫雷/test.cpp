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
	//�����������飬�ֱ����׵���Ϣ���Ų�����׵���Ϣ
	//�������9*9�����̣�����Ҫ��Ƴ�11*11����ֹ�Ų�ʱԽ���Ų�
	//�������ҷֱ��һ��һ�У��Ϳ����Ų�ÿһ���������Χ�˸�

	char mine[ROWS][COLS] = {0};//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = {0};//����Ų�õ��׵���Ϣ

	//���̳�ʼ��
	IntBoard(mine, ROWS, COLS, '0');
	IntBoard(show, ROWS, COLS, '*');

	//���̴�ӡ
	DisPlayboard(mine, ROW, COL);
	DisPlayboard(show, ROW, COL);



}


int main()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��> ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}


	} while (input);
	return 0;
}































