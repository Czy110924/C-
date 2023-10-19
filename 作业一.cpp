#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <windows.h>


int main()
{
	/*int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}*/


	/*int sum = 0;
	int i = 0;
	for (i = 0; i <= 100; i++)
	{
		sum += i;
	}
	printf("%d", sum);*/

	/*printf("游戏开始！\n");
	srand((unsigned int)time(NULL));
	int ret = rand() % 100 + 1;
	int input = 0;

	while (!(input == ret))
	{
		printf("请输入你要猜的数值：");
		scanf("%d", &input);
		if (input == ret)
		{
			printf("YOU WIN!\n");
		}
		else if (input < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜大了\n");
		}
	}*/

	/*for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%-2d*%2d=%2d ", i, j, i * j);
		}
		printf("\n");
	}*/

	/*while (1)
	{
		int i = 0;
		int ret = 0;
		int flag = 1;
		printf("请输入一个大于1的正整数：");
		scanf("%d", &ret);
		if (ret > 1)
		{
			for (i = 2; i < ret; i++)
			{
				if (ret % i == 0)
				{
					printf("不是质数\n");
					flag = 0;
					break;
				}
			}
			if (flag)
			{
				printf("是质数\n");
			}
		}
		else {
			printf("输入错误\n");
		}
	}*/

	//1 2 6 24 120
	/*while (1)
	{
		int sum = 0;
		int input = 0;
		scanf("%d", &input);
		for (int j = 1; j <= input; j++)
		{
			int ret = 1;
			for (int i = 1; i <= j; i++)
			{
				ret *= i;
			}
			sum += ret;
		}
		printf("%d\n", sum);
	}*/

	/*int row = 4;
	int col = 5;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (int n = 0; n < col; n++)
		{
			printf(" * ");
		}
		printf("\n");
	}*/


	/*while (1)
	{
		int rich = 0;
		double scholar = 0;
		int day = 0;
		scanf("%d", &day);
		for (int i = 0; i < day; i++)
		{
			if (i == 0)
			{
				rich += 100000;
				scholar += 0.01;
			}
			else
			{
				rich += 100000;
				scholar *= 2;
			}
		}
		printf("%d %f\n", rich, scholar);
	}*/
	
	/*int lebo(int);
	int count = 1;
	int ret = 0;
	scanf("%d", &ret);
	while (count <= ret)
	{
		for (int i = 0; i < 5; i++)
		{
			int num = lebo(count++);
			printf("%5d", num);
		}
		printf("\n");
	}*/
	
	/*int math(int);
	int input = 0;
	scanf("%d", &input);
	printf("%d\n", math(input));*/
	
	while (1)
	{
		void year(int);
		int input = 0;
		scanf("%d", &input);
		year(input);
		
	}
	return 0;
}

//void year(int year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//}


//int math(int count)
//{
//	int ret = 1;
//	if (count > 0)
//	{
//		for (int i = 1; i <= count; i++)
//		{
//			ret *= i;
//		}
//		return math(count - 1) * ret;
//	}
//}



//int lebo(int count)
//{
//	if (count == 1 || count == 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return lebo(count - 1) + lebo(count - 2);
//	}
//}