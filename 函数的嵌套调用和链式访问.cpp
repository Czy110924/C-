//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//
////函数不能嵌套定义，但是可以嵌套调用
////链式访问就是把一个函数的返回值作为另外一个函数的参数
//int main()
//{
//	int len = strlen("abc");
//	printf("%d", len);
//
//	//以下就是链式访问
//	printf("%d", strlen("abc"));
//
//	//printf()返回值是打印字符的个数，
//	// 第一次打印43返回2，第二次打印2返回1，
//	// 第三次打印1返回1
//	printf("%d", printf("%d", printf("%d", printf("%d", 43))));//43211
//	return 0;
//}