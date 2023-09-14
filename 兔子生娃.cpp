//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//
//
//
//
//
//int sum(int n)
//{
//	int res = 0;
//	if (n < 3)
//	{
//		res = 1;
//		return res;
//	}
//	else
//	{
//		res = sum(n - 2) + sum(n - 1);
//		return res;
//	}
//}
////【程序11】
////题目：古典问题：有一对兔子，
////从出生后第3个月起每个月都生一对兔子，
////小兔子长到第三个月后每个月又生一对兔子
////，假如兔子都不死，问每个月的兔子总数为多少？
////1.程序分析：　兔子的规律为数列1, 
////1, 2, 3, 5, 8, 13, 21....
//
//int main()
//{
//	for (int n = 1; n < 100; n++)
//	{
//		//printf("请输入月份");
//		//int n = 0;
//		//scanf("%d", &n);
//		int ret = sum(n);
//		printf("%d\n", ret);
//	}
//	return 0;
//}