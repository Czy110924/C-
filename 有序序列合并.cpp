#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
    int m = 2;
    int n = 2;
    //scanf("%d %d", &m, &n);
    int a[2];
    int b[2];

    int i = 0;
    for (i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }

    int j = 0;
    int k = 0;
    while ((j < m) && (k < n))
    {
        if (a[j] < b[k])
        {
            printf("%d ", a[j]);
            j++;
        }
        else
        {
            printf("%d ", b[k]);
            k++;
        }
    }

    if (k < n)
    {
        for (; k < n; k++)
        {
            printf("%d ", b[k]);
        }
    }
    else
    {
        for (; j < m; j++)
        {
            printf("%d ", a[j]);
        }
    }

    return 0;
}