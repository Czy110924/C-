//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#
//
//
//
//int str_len(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//
////循环实现
////void reverse_char(char* str)
////{
////	int left = 0;
////	int right = str_len(str) - 1;
////	
////	while (left < right)
////	{
////		char tmp = str[left];
////		str[left] = str[right];
////		str[right] = tmp;
////		left++;
////		right--;
////	}
////}
//
////递归实现
//void reverse_char(char* str)
//{
//	int left = 0;
//	int right = str_len(str) - 1;
//	
//	if (str_len(str+1) >= 2)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		//之所以给\0，是为了下一次的递归，str_len计算是如果没有\0会计算错误
//		str[right] = '\0';
//		//将下一个要递归的数组首个字符的地址传过去
//		reverse_char(str + 1);
//		str[right] = tmp;
//	}
//}
//
//
//int main()
//{
//	char arr[] = "abcdefg";
//	reverse_char(arr);
//	printf("%s\n", arr);
//	return 0;
//}