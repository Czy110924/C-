//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//
////【程序4】
////题目：输入某年某月某日，判断这一天是这一年的第几天？
////1.程序分析：以3月5日为例，应该先把前两个月的加起来
////，然后再加上5天即本年的第几天，特殊情况，闰年且输入
////月份大于3时需考虑多加一天。
//
//
//
//int main()
//{
//	int month, year, day, flag, sum = 0;
//	printf("请输入年月日");
//	scanf("%d %d %d", &year, &month, &day);
//	switch (month)
//	{
//		case 1: sum = 0;break;
//		case 2: sum = 31; break;
//		case 3: sum = 59; break;
//		case 4: sum = 90; break;
//		case 5: sum = 120; break;
//		case 6: sum = 151; break;
//		case 7: sum = 181; break;
//		case 8: sum = 212; break;
//		case 9: sum = 243; break;
//		case 10: sum = 273; break;
//		case 11: sum = 303; break;
//		case 12: sum = 334; break;
//	}
//	sum = sum + day;
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		flag = 1;
//	}
//	else
//	{
//		flag = 0;
//	}
//	if (flag == 0 && month > 2)
//	{
//		sum++;
//	}
//	printf("这是第%d天", sum);
//	return 0;
//}