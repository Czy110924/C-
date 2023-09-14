//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//
//
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