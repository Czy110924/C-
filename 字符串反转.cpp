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
////ѭ��ʵ��
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
////�ݹ�ʵ��
//void reverse_char(char* str)
//{
//	int left = 0;
//	int right = str_len(str) - 1;
//	
//	if (str_len(str+1) >= 2)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		//֮���Ը�\0����Ϊ����һ�εĵݹ飬str_len���������û��\0��������
//		str[right] = '\0';
//		//����һ��Ҫ�ݹ�������׸��ַ��ĵ�ַ����ȥ
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