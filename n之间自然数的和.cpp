#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//输出m,n之间自然数的和
//int main()
//{
//	int m, n;// 声明两个变量容纳m,n
//	int temp = 0;// 生命变量temp，用于转换位置
//	int sum = 0;// 声明sum，容纳所求出的和
//
//	// 输入值
//	scanf("%d %d", &m, &n);
//
//	// 特殊情况m>n
//	if (m > n)
//	{
//		temp = m;
//		m = n;
//		n = temp;
//	}
//
//	//for循环求和，从m加到n
//	for (int i = m+1; i < n; i++)
//		sum += i;
//
//	printf("%d\n", sum);
//	return 0;
//}