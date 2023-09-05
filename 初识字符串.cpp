#include <stdio.h>
#include <string.h>

//int main()
//{
//	//字符数组 - 一组相同类型的元素
//	char arr1[] = "abc"; //字符串以\0结尾
//	char arr2[] = { 'a','b','c'};
//	printf("%s", arr1);
//	printf("%s", arr2);
//	//  \0是字符串的结束标志，使字符串打印的时候会停止打印
//	//  没有\0字符串会一直乱码打印下去
//
//	int len = strlen(arr1);// 3 计算字符串长度时\0不算在里面
//	int len2 = strlen(arr2);// 33 乱码的长度（30随机值）会计算进去
//							//往后一直找，直到找到\0为止
//	printf("%d %d", len, len2);
//	return 0;
//}