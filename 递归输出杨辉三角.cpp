#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int res(int a, int b) {
	return (b == 1 || b == a) ? 1 : res(a - 1, b - 1) + res(a - 1, b);
	//任何一行第一列为1且任意X行X列为1，否则就是前一行前一列加上前一行同列的值
}

int main()
{
	int i, j;
	printf("需要输出几行杨慧三角？");
	scanf("%d", &i);
	for (int m = 1; m <= i; m++) {
		for (j = i-m; j >= 0;j--) {
			printf("   ");
		}
		for (j = 1; j <= m; j++) {  // m是行，j就是列
			printf("%6d", res(m, j));
		}
		printf("\n");
	}
	return 0;
}
