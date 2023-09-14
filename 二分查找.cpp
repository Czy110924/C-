//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//
//int binary_search(int a[] ,int k, int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7; 
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//数组arr传参实际上传的不是数组本身
//	//只是传过去了数组首元素的地址,地址大小是8或者16
//	//所以如果把sz放在函数内计算，始终是1
//	//所以参数也可以写int * a,
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("找不到");
//	}
//	else
//	{
//		printf("找到了，下标是%d", ret);
//	}
//
//	return 0;
//}