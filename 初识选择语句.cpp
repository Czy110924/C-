#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


int main()
{
	int out = 0;
	printf("你要好好学习（0/1）？");
	scanf("%d", &out);
	if (out == 1)
		printf("拿好offer");
	else
		printf("卖红薯");
	return 0;
}