#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//
////递归必须要有限制条件，用来结束递归
////每次递归都必须越来越接近限制条件
//
////stack overflow栈溢出  错误err  
////
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//
//	print(num); //print打印参数数字的每一位
//	return 0;
//}

////求数组字符串的长度
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//求字符串的长度，但是不创建临时变量
//递归求值
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	char arr[] = "abc";
//	printf("%d", my_strlen(arr));
//	return 0;
//}



//递归求阶乘
//int sum(int n)
//{
//	if (n > 1)
//	{
//		return n * sum(n - 1);
//	}
//	else if(n <= 1)
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	printf("%d", sum(5));
//	return 0;
//}


//斐波那契  用递归有大量重复运算 可以求解但效率太低
//int sum(int n)
//{
//	if (n < 3)
//	{
//		return 1;
//	}
//	else
//	{
//		return sum(n - 1) + sum(n - 2);
//	}
//}


//同样求斐波那契  下面方法算法非常快 
// 不考虑溢出问题（太大会给出错误结果） 效率高
//这是迭代方法
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", fib(n));
//	return 0;
//}







//同样是递归的汉诺塔问题

// 输入圆盘数量，输出移动次数
//int hnt(int n)
//{
//	int ret = 0;
//	while (n > 0)
//	{
//		if (n == 1)
//		{
//			ret = 1;
//			return ret;
//		}
//		else
//		{
//			ret = hnt(n - 1) * 2 + 1;
//			return ret;
//		}
//	}
//}
//int main()
//{
//	// 1 3 7 15 31 63 127
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", hnt(n));
//}



//输入圆盘数量，输出移动步骤
//void Move(char A, char C, int n)
//{
//	printf("将第%d个圆盘从%c移动到%c\n", n, A, C);
//}
//
//
//void HanoiTower(char A,char B,char C,int n)
//{
//	if (n == 1)
//	{
//		Move(A, C, n);
//	}
//	else
//	{
//		HanoiTower(A, C, B, n - 1);
//		Move(A, C, n);
//		HanoiTower(B, A, C, n - 1);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	HanoiTower('A','B','C',n);
//}



//青蛙跳台阶问题 1 2 跳法































































