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
//		//找一个偶数，从前往后，left < right是为了防止越界访问
//		while ((a[left] % 2 == 1) && (left < right))
//		{
//			left++;
//		}
//
//		//找一个奇数，从后往前
//		while ((a[right] % 2 == 0) && (left < right))
//		{
//			right--;
//		}
//
//		//交换位置
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
//	//输入
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	//换位
//	change(a, sz);
//
//	//输出
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//	
//
//	return 0;
//}