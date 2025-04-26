#include<stdio.h>
int main()
{
    int count;
  scanf("%d", &count);
  int arr[count];
  int num1 = 0;
  int num2 = 0;
  for (int i = 0; i < count; i++)
  {
    scanf("%d", &arr[i]);
    if (arr[i] % 2 == 0)
    {
        num1++;
    }
    else if (arr[i] % 3 == 0)
    {
        num2++;
    }
    
  }
  printf("%d ", num1);
  printf("%d", num2);
  
  return 0;
}