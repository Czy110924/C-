#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>




//【程序2】 
//题目：企业发放的奖金根据利润提成。利润(I)低于或等于10万元时，奖金可提10% ；
// 利润高 于10万元，低于20万元时，低于10万元的部分按10% 提成，高于10万元的部分，可可提成7.5 % ；
// 20万到40万之间时，高于20万元的部分，可提成5 % ；40万到60万之间时高于40万元的部分，可提成3 % 
// ；60万到100万之间时，高于60万元的部分，可提成1.5 % ，高于100万元时，超过100万元的部分按1 % 提成，
// 从键盘输入当月利润I，求应发放奖金总数？


int main()
{
	long sum = 0;
	int ret = 0;
	scanf("%d", &sum);
	int sum1 = 100000 * 0.1;
	int sum2 = sum1 + 100000 * 0.075;
	int sum3 = sum2 + 200000 * 0.05;
	int sum4 = sum3 + 200000 * 0.03;
	int sum5 = sum4 + 400000 * 0.015;
	if (sum <= 100000)
	{
		ret = sum * 0.1;
		printf("%d\n", ret);
	}
	else if (sum <= 200000)
	{
		ret = sum1 + (sum - 100000) * 0.075;
		printf("%d %d\n",sum2, ret);
	}
	else if (sum <= 400000)
	{
		ret = sum2 + (sum - 200000) * 0.05;
		printf("%d %d\n", sum3, ret);
	}
	else if (sum <= 600000)
	{
		ret = sum3 + (sum - 400000) * 0.03;
		printf("%d %d\n", sum4, ret);
	}
	else if (sum <= 1000000)
	{
		ret = sum4 + (sum - 600000) * 0.015;
		printf("%d %d\n",sum5 ,ret);
	}
	else if (sum > 1000000)
	{
		ret = sum5 + (sum - 1000000) * 0.001;
		printf("%d %d\n", ret);
	}
	printf("%d %d %d %d %d %d", sum1, sum2, sum3, sum4, sum5, ret);
	return 0;
}