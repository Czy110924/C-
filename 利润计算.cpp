#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>




//������2�� 
//��Ŀ����ҵ���ŵĽ������������ɡ�����(I)���ڻ����10��Ԫʱ���������10% ��
// ����� ��10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10% ��ɣ�����10��Ԫ�Ĳ��֣��ɿ����7.5 % ��
// 20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5 % ��40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3 % 
// ��60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5 % ������100��Ԫʱ������100��Ԫ�Ĳ��ְ�1 % ��ɣ�
// �Ӽ������뵱������I����Ӧ���Ž���������


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