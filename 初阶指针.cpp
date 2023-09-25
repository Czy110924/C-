#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>





int main()
{
	//指针类型的意义
	//指针类型决定了：指针解引用的权限有多大
	//指针类型决定了：指针走一步，能走多远pc+1
	//char只能访问一个字节 int4个字节 short两个字节 
	//int a = 0x11223344;
	//char* pc = &a; 
	//*pc = 0; 
	// 
	// 
	// 
	//野指针，不清楚指向的指针
	//1. int * p;未初始化，默认为随机值
	//   *p = 20;非法访问内存
	//2. 越界访问，超出数组范围访问空间此时p就是野指针
	//   int arr[10] = {0};
	//   int *p = arr;
	//   for(int i=0; i<=10;i++)
	//   {
	//		*p = i;
	//		p++;
	//	 }
	//3. 指针指向的空间释放
	// 
	//		规避野指针
	// 指针初始化 int*p = NULL;
	// 小心指针越界访问，C语言不会检查数组越界行为
	// 指针指向的空间释放及时置NULL
	// 指针使用之前检查有效性
	// 
	// 
	// 
	// 指针-指针等于两个指针之间的元素个数，相减前提指向同一块空间 
	// int mtstrlen(char*str){
	//		char*start = str;
	//		while(*str != '\0'
	//		{
	//			str++;
	//		}
	//		return start - str;
	// 
	// arr[2] == 2[arr] == *(arr+2)
	// 
	// 
	// 指针数组
	// int* parr[10]
	// 
	// 
	// 
	//char只能访问一个字节 int4个字节 short两个字节 
	//int a = 0x11223344;
	//char* pc = &a; 
	//*pc = 0;

	int a = 9;
	int* p = NULL;
	p = &a;
	printf("%d", *p);


	return 0;
}