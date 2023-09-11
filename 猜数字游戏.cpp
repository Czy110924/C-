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
	printf("游戏开始\n");
	//生成一个随机数ran()
	//rand()函数返回一个0~32767

	//srand()函数影响rand()函数输出，里面必须有一个不断变化的值
	//才能让rand()输出随机数，时间-时间戳是不断变化的
	/*srand((unsigned int) time(NULL));*/
	//rand（）本身输出一串随机数，但不变，因为srand()没有变化
	//把每次进入文件的时间戳给srand（）这样每次打开文件的时候
	//都能用rand（）输出一串与上次不一样的随机数
	//取值要0~100，%100取值是0~99，再加一就是1~100
	int ret = rand()%100 + 1;
	//printf("%d\n", ret);
	int guess = 0;
	while(1)
	{
		printf("猜数字\n");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了");
		}
		else if (guess > ret)
		{
			printf("猜大了");
		}
		else if (guess == ret)
		{
			printf("猜对了\n");
			break;
		}
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int output = 0;
	do
	{
		menu();
		printf("请选择\n");
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
				printf("游戏退出\n");
				break;
			}
			default:
			{
				printf("输入错误，重新输入\n");
				break;
			}
		}
	} while (output);
	
	return 0;
}