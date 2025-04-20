#include<stdio.h>
int main()
{
  int num;
  scanf("%d", &num);
  int arr[num];
  int result[num];
  int j=0;
  for (int i = 0; i < num; i++)
  {
    scanf("%d", &arr[i]);
    if (i%2 != 0)
    {       
        result[j] = arr[i];
        j++;
    }
    
  }
  for (int i = j-1; i >= 0; i--)
  {
    printf("%d ", result[i]);
  }
  

  return 0;
}