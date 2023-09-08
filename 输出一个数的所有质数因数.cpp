#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a, b;
	b = 2;

	//输入你要计算的值
	scanf("%d", &a);

	//判断大于1,1没有质因数
	while (a>1) {
		//判断b是否是a的因数，是就进入循环，否就判断下一个自然数
		if (a % b == 0)
		{
			//将值分解成质数相乘的式子如：12 = 2*2*3
			//将确定是因数的值不断循环除尽然后输出
			//偶数中只有2是质数，且是所有数中最小的质数
			while (a % b == 0)
			{
				//循环将确定是因数的值不断除尽
				a = a / b;
			}
			//输出确定的因数
			printf("%d\n", b);
		}
		else
		{
			//判断不是因数，就跳过判断下一个
			b++;
		}
	}
	return 0;
}