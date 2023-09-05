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
			printf("   ");  //为了对其输出的空字符，6为指定的输出字段的宽度为6。如果数据的位数小于6，则世尺左端补以空格
					//若大于6，则按实际位数输出。这主要是为了右对齐的格式化输出
		}
		for (j = 1; j <= m; j++) {  // m是行，j就是列
			printf("%6d", res(m, j));
		}
		printf("\n");
	}
	return 0;
}
