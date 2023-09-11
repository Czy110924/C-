//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//
//
//
//int main()
//{
//	int y = 0;
//	//判断是不是闰年
//	//被4整除，不能被100整除
//	//能被400整除
//	int sum = 0;
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0)
//		{
//			if (i % 100 != 0)
//			{
//				printf("%d ", i);
//				sum++;
//			}
//			
//		}
//		if (i % 400 == 0)
//		{
//			printf("%d ", i);
//			sum++;
//		}
//
//
//
//
//
//		//&&并且   ||或者
//		if ((i%4==0 && i%100!=0) || (i%400==0))
//		{
//			printf("%d", i);
//			sum++; 
//		}
//	}
//	printf("%d", sum);
//	return 0;
//}