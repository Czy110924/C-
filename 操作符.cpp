#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	//除号   /
	//整数除法
	//int a = 3 / 5;//   0
	
		//浮点数除法
		//float a = 6.0f / 5.0f;//   



	//取模操作符   %
	//两端必为整数
	//int a = 7 % 3;//  1




	//移位操作符  <<   >>
	//在二进制的基础上左移移位
	//二进制32位，2的二进制为：
	//00000000000000000000000000000010
	//向左移一位：00...100 = 4  左移补0
	//两种右移  算数右移补符号位  逻辑右移补0
	// 只有负数才有原 反 补码
	//int a = 2;
	//int b = a << 1;



	//位操作符  &按位与  |按位与  ^按位异或
	//int a = 3 & 5; // 1
	//在二进制32位基础上，一一对应有零就取零，无零取1
	//00000000000000000000000000000011  3
	//00000000000000000000000000000101  5
	//00000000000000000000000000000001 结果





	printf("%d", b);
	return 0;
}