//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <math.h>
//
//
//
//
//int main()
//{
//	for (int i = 0; i <= 100000; i++)
//	{
//		//先获取位数
//		int tmp = i;
//		int n = 1;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//
//		tmp = i;
//		int sum = 0;
//		for (int j = 0; j < n; j++)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//
//
//
//
//	return 0;
//}