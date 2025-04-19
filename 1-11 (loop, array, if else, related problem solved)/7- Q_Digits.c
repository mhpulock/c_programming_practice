#include<stdio.h>
int main()
{
  int count;
  scanf("%d", &count);
  for (int i = 0; i < count; i++)
  {
    int num;
    scanf("%d", &num);
    do
    {
        printf("%d ", num % 10);
        num /= 10;
    }while (num != 0);
    printf("\n");
  }
  
  return 0;
}