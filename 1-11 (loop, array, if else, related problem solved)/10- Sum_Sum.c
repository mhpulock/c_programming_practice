#include<stdio.h>
int main()
{
  int num;
  scanf("%d", &num);
  int arr[num];
  int positive = 0;
  int negative = 0;
  for (int i = 0; i < num; i++)
  {
    scanf("%d", &arr[i]);
    if (arr[i] > 0)
    {
        positive += arr[i];
        
    }
    if (arr[i] < 0)
    {
        negative += arr[i];
    }
    
  }
  
  printf("%d ", positive);
  printf("%d ", negative);

  return 0;
}