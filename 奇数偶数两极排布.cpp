//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//void change(int a[],int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left < right)
//	{
//		//��һ��ż������ǰ����left < right��Ϊ�˷�ֹԽ�����
//		while ((a[left] % 2 == 1) && (left < right))
//		{
//			left++;
//		}
//
//		//��һ���������Ӻ���ǰ
//		while ((a[right] % 2 == 0) && (left < right))
//		{
//			right--;
//		}
//
//		//����λ��
//		if (left < right)
//		{
//			int tmp = a[left];
//			a[left] = a[right];
//			a[right] = tmp;
//			left++;
//			right--;
//		}
//	}
//}
//
//int main()
//{
//	int a[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(a) / sizeof(a[0]);
//	//����
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	//��λ
//	change(a, sz);
//
//	//���
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//	
//
//	return 0;
//}