//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//#include <windows.h>
//
//int main()
//{
//	//int i = 1;
//	//do
//	//{
//	//	//先执行一次，在进行判断，至少执行一次
//	//	printf("%d", i);
//	//	i++;
//	//} while(i <= 10);
//
//
//	/*int n = 0;
//	int num = 0;
//	int f = 1;
//	scanf("%d", &n);*/
//	//求1！+ 2！+ 3!
//	/*for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			f *= j;
//		}
//		num += f;
//		f = 1;
//	}*/
//
//	/*for (int i = 1; i <= n; i++)
//	{
//		f *= i;
//		num += f;
//	}*/
//	//printf("%d", num);
//
//
//
//	//二分查找数据法
//	/*int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int f = 7;
//	while(left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < f)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > f)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("没有找到");
//	}*/
//
//
//
//	//进度条
//	//char arr1[] = "welcome to bite!!!!!!";
//	//char arr2[] = "*********************";
//	//int left = 0;
//	//int right = strlen(arr1) - 1;
//
//	//while (left <= right)
//	//{
//	//	printf("%s\n", arr2);
//	//	arr2[left] = arr1[left];
//	//	arr2[right] = arr1[right];
//	//	left++;
//	//	right--;
//	//	Sleep(500);//睡眠一秒
//	//	system("cls");//清空屏幕
//	//}
//	//printf("%s\n", arr2);
//
//
//
//
//	//密码登陆 
//	//char pwd[20] = { 0 };
//	//int i = 0;
//	//for (i = 1; i <= 3; i++)
//	//{
//	//	printf("请输入密码！");
//	//	scanf("%s", pwd);
//	//	//strcmp()字符串函数，判断是否相同，相同返回0
//	//	//字符串比较，比对应位置的字符串ASCII值
//	//	//数组名本来就是地址，不用&符号
//	//	if (strcmp(pwd, "123456") == 0)
//	//	{
//	//		printf("登陆成功");
//	//		break;
//	//	}
//	//	else
//	//	{
//	//		if (i == 3) {
//	//			printf("三次密码输入错误，冻结账号！");
//	//		}
//	//		else
//	//		{
//	//			printf("密码输入错误，重新输入\n");
//	//		}
//	//	}
//	//	
//	//}
//
//
//	return 0;
//}