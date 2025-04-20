#include<stdio.h>
int main()
{
  int num;
  scanf("%d", &num);
  if (num == 1)
  {
    printf("-1");
  }
  else{
    for (int i = 1; i <= num; i++)
  {
    if (i%2 == 0)
    {
        printf("%d\n", i);
    }
    
  }
  }
  
  return 0;
}