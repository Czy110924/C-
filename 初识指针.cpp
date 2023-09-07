#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main()
{
	int a = 10;
	printf("%p", &a);
	int* pa = &a;
	//取地址a,只会拿出第一个字节的地址，有了第一个后面三个就有了
	//   %p  专门用来打印地址
	//我们把地址取出来存放在变量里，存放地址的变量在C语言中就是指针变量
	//存放地址的变量类型就是int*类型
	//  * 说明变量pa是指针变量 
	//  int 说明pa执行的对象是int类型,char*,short*,long*...

	*pa = 20;
	//  *  解引用操作符  *pa就是通过pa里的地址找到a,再给他赋值
	//  &  地址操 作符

	
	return 0;
}