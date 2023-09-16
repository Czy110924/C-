#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//int main()
//{
//	//创建数组：数组类型 数组名[常量表达式]
//	int a = 10;
//	int a1[5] = { 1,2,3,4,5 };//完全初始化
//	int a2[5] = { 1,2 };//不完全初始化
//
//	int a3[] = { 1,2,3,4,5 };//会根据初始化的数组来决定数组的大小
//	
//
//	char ch1[5] = { 'b', 'i', 't' };//b i t \0 \0
//	char ch2[] = { 'b', 'i', 't' };//b i t
//
//	char ch3[5] = "bit";//b i t \0 \0
//	char ch4[] = "bit";//b i t \0
//
//	char ch5[] = "bit";//b i t \0      \0不打印
//	char ch6[] = { 'b', 'i', 't' };//打印：bit烫烫烫烫     因为里面没有\0
//
//	printf("%d", strlen(ch5));
//	printf("%d", strlen(ch6));
//
//	printf("%s", ch2);
//
//
//	return 0;
//}


//
////一维数组
//int main()
//{
//	//int arr[10] = { 0 };//默认第一个是零，其他用零填充
//	//arr[4] = 5;//[] - 下标引用操作符
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d", arr[i]);
//	//}
//
//	//&p - 是按地址的格式打印 - 十六进制打印
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);
//	}
//  /*&arr[0] = 0000003CCDF5F908
//	& arr[1] = 0000003CCDF5F90C
//	& arr[2] = 0000003CCDF5F910
//	& arr[3] = 0000003CCDF5F914
//	& arr[4] = 0000003CCDF5F918
//	& arr[5] = 0000003CCDF5F91C
//	& arr[6] = 0000003CCDF5F920
//	& arr[7] = 0000003CCDF5F924
//	& arr[8] = 0000003CCDF5F928
//	& arr[9] = 0000003CCDF5F92C*/
//	//有以上地址可以得出数组是连续存放的（十六进制：0~9 a b c d e f）
//	//一个整型数据大小四个字节，一个字节一个地址，所以每个数组元素地址相差4
//	//地址的加1是根据你的数据类型，整型加1加四个字节，字符加1加1个字节同理
//	//所以可以通过地址自增来输出每一个数组元素
//	return 0;
//}





//二维数组


int main()
{
	//二维数组初始化 - 创建的同时给赋值
	/*int arr[3][4];
	char ch[3][10];*/

	//初始化
	//int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	//int arr[3][4] = { 1,2,3,4,5,6,7,8};//不完全初始化补0
	//int arr[3][4] = { {1,2,3,4},{1,2,3,4},{1,2,3,4} };


	//二维数组的使用
	/*int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d", arr[i][j]);
		}
	}*/


	//二维数组的存储
	/*int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
		}
		printf("\n");
	}*/
	/*&arr[0][0] = 0000006E36FBF5B8
	& arr[0][1] = 0000006E36FBF5BC
	& arr[0][2] = 0000006E36FBF5C0
	& arr[0][3] = 0000006E36FBF5C4

	& arr[1][0] = 0000006E36FBF5C8
	& arr[1][1] = 0000006E36FBF5CC
	& arr[1][2] = 0000006E36FBF5D0
	& arr[1][3] = 0000006E36FBF5D4

	& arr[2][0] = 0000006E36FBF5D8
	& arr[2][1] = 0000006E36FBF5DC
	& arr[2][2] = 0000006E36FBF5E0
	& arr[2][3] = 0000006E36FBF5E4*/
	//说明二维数组也是连续的
	//arr[0] arr[1] arr[2]可以代表每一行数组


	//数组作为函数参数
	//数组名 就是 数组首元素 的地址
	//但是有两个例外
	//1. sizeof{数组名} - 数组名表示整个数组 - 计算的是整个数组的大小 单位字节
	//2. &数组名 - 数组名表示整个数组 - 取出的是整个数组的地址 - 取出的是数组的地址
	//数组的地址也是数组首元素地址，但是意义不一样
	int arr[] = { 1,2,3,4,5,6,7,9 };
	//计算元素个数
	int sz = sizeof(arr) / sizeof(arr[0]);
	//数组冒泡排序
	void bubble_sort(int arr[], int sz);
	bubble_sort(arr,sz);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("%p\n", &arr);
	printf("%p\n", &arr+1);//地址加了40

	printf("%p\n", arr);
	printf("%p\n", arr+1);//地址加了4

	/*printf("%p", &arr[0]);
	printf("%p", &arr[0]);*/




	return 0;
}

void bubble_sort(int arr[], int sz)
{
	int i = 0;
	int flag = 1;//优化 若第一次执行一次都没有交换
	//那么说明本身就是有序的，结束循环
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//arr[i]就是*(arr + i)的简化写法而已
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = tmp;
			}
			flag = 0;
		}
		if (flag == 1)
		{
			break;
		}
	}
	
}












































