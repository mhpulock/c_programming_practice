#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int star=1;
  int space = n-1;


  for(int i=0; i< n; i++)
  {
    for (int j = 0; j < space; j++)
    {
        printf(" ");
    }
    for (int j = 0; j < star; j++)
    {
        printf("*");
    }
    star+=2;
    space--;
    printf("\n");
  }

  int starr = n+1;
int spaces = 1;
  for(int i=n; i > 0; i--)
  {
    for (int j = 0; j < spaces; j++)
    {
        printf(" ");
    }
    for (int j = 0; j <= starr; j++)
    {
        printf("*");
    }
    starr-=2;
    spaces++;
    printf("\n");
  }
  return 0;
}