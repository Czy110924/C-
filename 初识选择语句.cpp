#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


int main()
{
	int out = 0;
	printf("��Ҫ�ú�ѧϰ��0/1����");
	scanf("%d", &out);
	if (out == 1)
		printf("�ú�offer");
	else
		printf("������");
	return 0;
}