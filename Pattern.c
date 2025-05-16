#include<stdio.h>
int main()
{
  int n;
  scanf("%d", &n);
  int hash = 1;
  int space = n-1;

  for(int i=0; i< n; i++)
  {
    if (i%2 == 0)
    {
      for (int j = 0; j < space; j++)
    {
        printf(" ");
    }
    for (int j = 0; j < hash; j++)
    {
        printf("#");
    }
    hash+=2;
    space--;
    printf("\n");
    }
    

  if (i%2 != 0)
  {
    for (int j = 0; j < space; j++)
    {
        printf(" ");
    }
    for (int j = 0; j < hash; j++)
    {
        printf("-");
    }
    hash+=2;
    space--;
    printf("\n");
  }
      
  }

  int hashh = hash-5;
  int spaces = 1;
  for(int i=n; i > 0; i--)
  {
    if (i%2 == 0)
    {
      for (int j = 0; j < spaces; j++)
    {
        printf(" ");
    }
    for (int j = 0; j <= hashh; j++)
    {
        printf("#");
    }
    hashh-=2;
    spaces++;
    printf("\n");
    }
    
    if (i%2 != 0)
    {
      for (int j = 0; j < spaces; j++)
    {
        printf(" ");
    }
    for (int j = 0; j <= hashh; j++)
    {
        printf("-");
    }
    hashh-=2;
    spaces++;
    printf("\n");
    }
    
  }
  return 0;
}