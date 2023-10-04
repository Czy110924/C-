//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
//void reverse(char* left, char* right)
//{
//    while (left < right)
//    {
//        char tmp = *left;
//        *left = *right;
//        *right = tmp;
//        left++;
//        right--;
//    }
//}
//
//int main() {
//    char arr[101] = { 0 };
//    gets_s(arr);
//    int len = strlen(arr);
//    reverse(arr, arr + len - 1);
//
//    char* start = arr;
//    char* end = start;
//    while (*start)
//    {
//        while (*end != ' ' && *end != '\0')
//        {
//            end++;
//        }
//        reverse(start, end - 1);
//        if (*end != '\0')
//        {
//            end++;
//        }
//        start = end;
//    }
//    printf("%s", arr);
//
//
//    return 0;
//}
//
