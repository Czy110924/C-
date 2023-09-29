#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>



int main()
{
    //求最小公倍数  1
    /*int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int m = a > b ? a : b;
    while (1)
    {
        if (m % a == 0 && m % b == 0)
        {
            break;
        }
        m++;
    }
    printf("%d", m);*/


    //求最小公倍数  2 简化算法
    /*int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    
    int i = 1;
    while (a * i % b)
    {
        i++;
    }
    printf("%d", a * i);*/



    char arr[100] = { 0 };
    gets(arr);
    int sz = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = sz - 1;
    while (left < right)
    {
        char tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        left++;
        right--;
    }
    printf("%s", arr);
    return 0;


    return 0;
}
