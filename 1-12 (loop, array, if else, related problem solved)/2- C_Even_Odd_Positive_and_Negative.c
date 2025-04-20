#include<stdio.h>
int main()
{
  int count;
  scanf("%d", &count);
  int even=0, odd=0, positive=0, negative=0;
  for (int i = 0; i < count; i++)
  {
    int num=0;
    scanf("%d", &num);
    if (num%2 == 0)
    {
        even++;
    }
    else{
        odd++;
    }

    if (num > 0)
    {
        positive++;
    }
    else if (num < 0)
    {
        negative++;
    }
    
    
  }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
    printf("Positive: %d\n", positive);
    printf("Negative: %d", negative);
  return 0;
}