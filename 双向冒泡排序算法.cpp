#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define MAX 10

void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", arr[i]);
	}
}

void change(int* a, int* b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

int vost(int arr[],int n)
{
	int left = 0;
	int right = n-1;//数组最后一个数的下标
	int flag = 0;
	int i = 0;

	while (left < right)
	{
		//left
		//从左向右运算，大的向右转移
		for (i = left; i < right-1; i++)
		{
			if (arr[i] > arr[i + 1]) {
				change(&arr[i], &arr[i + 1]);//通过地址交换位置
			}
			flag = 1;//确认有交换行为
		}
		if (!flag)//有交换行为则继续执行代码，若没有说明已经排序完毕，提前结束循环
		{
			break;
		}
		//right
		//从右向左运算，小的向左转移
		for (i = right; i > left; i--)
		{
			if (arr[i] < arr[i - 1])
			{
				change(&arr[i], &arr[i - 1]);
			}
		}
		left++;//交换次数最大 = 数组长度减一
	}
	return 0;
}

int main()
{
	int arr[MAX] = {9,8,7,4,5,6,1,2,3,12};
	vost(arr, MAX);
	print(arr,MAX);
	return 0;
}