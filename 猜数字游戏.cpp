#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <windows.h>

#include <time.h>


void menu()
{
	printf("*************************\n");
	printf("********1.play***********\n");
	printf("********0.exit***********\n");
	printf("*************************\n");
}

void game()
{
	printf("��Ϸ��ʼ\n");
	//����һ�������ran()
	//rand()��������һ��0~32767

	//srand()����Ӱ��rand()������������������һ�����ϱ仯��ֵ
	//������rand()����������ʱ��-ʱ����ǲ��ϱ仯��
	/*srand((unsigned int) time(NULL));*/
	//rand�����������һ��������������䣬��Ϊsrand()û�б仯
	//��ÿ�ν����ļ���ʱ�����srand��������ÿ�δ��ļ���ʱ��
	//������rand�������һ�����ϴβ�һ���������
	int ret = rand();
	printf("%d\n", ret);
}

int main()
{
	srand((unsigned int)time(NULL));
	int output = 0;
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &output);
		switch (output)
		{
			case 1:
			{
				game();
				break;
			}
			case 0:
			{
				printf("��Ϸ�˳�\n");
				break;
			}
			default:
			{
				printf("���������������\n");
				break;
			}
		}
	} while (output);
	
	return 0;
}