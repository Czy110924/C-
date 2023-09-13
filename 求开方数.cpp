#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>




//【程序3】
//题目：一个整数，它加上100后是一个完全平方数，
//再加上168又是一个完全平方数，请问该数是多少？

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100000; i++)
//	{
//		int a = sqrt(i + 100);
//		int b = sqrt(i + 268);
//		if (a*a == i + 100 && b*b == i + 268)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}