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
	int right = n-1;
	int flag = 0;
	int i = 0;

	while (left < right)
	{
		//left
		for (i = left; i < right-1; i++)
		{
			if (arr[i] > arr[i + 1]) {
				change(&arr[i], &arr[i + 1]);
			}
			flag = 1;
		}
		if (!flag)
		{
			break;
		}
		//right
		for (i = right; i > left; i--)
		{
			if (arr[i] < arr[i - 1])
			{
				change(&arr[i], &arr[i - 1]);
			}
		}
		left++;
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