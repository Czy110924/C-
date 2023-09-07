#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//输出两个数的最大公因数最小公倍数
//int main()
//{
//	int a = 0, b = 0, temp = 0;
//	printf("请输入两个整数a,b\n");
//	scanf("%d %d", &a, &b);
//	int num = a * b;
//	//辗转相除法 大数除以小数，再用除数除以余数，
//	// 嵌套循环直到余数为零，这时的除数就是我们要的最大公因数
//	while (a % b != 0)
//	{c
//		temp = a % b;
//		a = b;
//		b = temp;
//	}
//	//两个数相乘除以最大公因数得意最小公倍数
//	printf("max = %d min = %d", b, (num / b));
//	return 0;
//}