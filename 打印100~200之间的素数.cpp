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
			//Ϊʲôʹ��sqrt()����ƽ��
			//����m = a * b,i������a��ô��������b
			//16 = 2*8 = 4*4ֻ��Ҫ����2~4�Ϳ���ֱ�����ǲ���������������
			//����Ǹ�Ч���㷨��
			//һ���Ż���i => sqrt(i)
			//�����Ż���i = 100 => i = 101,i++ => i+=2ż�������ж�
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