//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//
////������4��
////��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿
////1.�����������3��5��Ϊ����Ӧ���Ȱ�ǰ�����µļ�����
////��Ȼ���ټ���5�켴����ĵڼ��죬�������������������
////�·ݴ���3ʱ�迼�Ƕ��һ�졣
//
//
//
//int main()
//{
//	int month, year, day, flag, sum = 0;
//	printf("������������");
//	scanf("%d %d %d", &year, &month, &day);
//	switch (month)
//	{
//		case 1: sum = 0;break;
//		case 2: sum = 31; break;
//		case 3: sum = 59; break;
//		case 4: sum = 90; break;
//		case 5: sum = 120; break;
//		case 6: sum = 151; break;
//		case 7: sum = 181; break;
//		case 8: sum = 212; break;
//		case 9: sum = 243; break;
//		case 10: sum = 273; break;
//		case 11: sum = 303; break;
//		case 12: sum = 334; break;
//	}
//	sum = sum + day;
//	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//	{
//		flag = 1;
//	}
//	else
//	{
//		flag = 0;
//	}
//	if (flag == 0 && month > 2)
//	{
//		sum++;
//	}
//	printf("���ǵ�%d��", sum);
//	return 0;
//}