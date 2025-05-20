#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t, n, temp;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
    scanf("%d", &n);
    int a[n];
    int b[n];
    int c[n];
    for (int i = 0; i < n; i++)
    {
    scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
    b[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
    for (int j = i+1; j < n; j++)
    {
    if (b[j] < b[i])
    {
        temp = b[i];
        b[i] = b[j];
        b[j] = temp;
    }

    }
    }

    for (int i = 0; i < n; i++)
    {
    c[i] = abs(a[i]-b[i]);
    printf("%d ", c[i]);
    }
    printf("\n");
    }



    return 0;
    }