#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int num = 1;
    int space = n-1;
    for(int i=0; i< n; i++)
    {
        for (int j = 0; j < space; j++)
    {
        printf(" ");
    }
    for (int j = num; j > 0 ; j--)
    {
        printf("%d", j);
    }
    num++;
    space--;
    printf("\n");
    }
  return 0;
}