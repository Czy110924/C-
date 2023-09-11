#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

int main()
{
	int i = 0;
	for (i = 101; i <= 200; i+=2)
	{
		int a = 0;
		int flag = 1;
		for (a = 2; a <= sqrt(i); a++)
		{
			//为什么使用sqrt()，开平方
			//假设m = a * b,i能整除a那么就能整除b
			//16 = 2*8 = 4*4只需要除以2~4就可以直到它是不是质数（素数）
			//这就是高效率算法！
			//一次优化：i => sqrt(i)
			//二次优化：i = 100 => i = 101,i++ => i+=2偶数不用判断
			if (i % a == 0)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
		{
			printf("%d  ", i);
		}
	}
	return 0;
}