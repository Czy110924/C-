#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int res(int a, int b) {
	return (b == 1 || b == a) ? 1 : res(a - 1, b - 1) + res(a - 1, b);
}

int main()
{
	int i, j;
	printf("需要输出几行杨慧三角？");
	scanf("%d", &i);
	for (int m = 1; m <= i; m++) {
		for (int n = i-m; n >=0;n--) {
			printf("   ");
		}
		for (j = 1; j <= m; j++) {
			printf("%6d", res(m, j));
		}
		printf("\n");
	}
	return 0;
}