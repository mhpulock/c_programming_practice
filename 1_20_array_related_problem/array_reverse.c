#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int arr[num];
    int j = num-1;
    for (int i = 0; i < num; i++)
    {
      scanf("%d", &arr[i]);
    } 
    for (int i = 0; i < num; i++)
      {
        
        if (arr[i] != arr[j])
        {
          int tmp = arr[i];
        arr[i] = arr[j];
        arr[j] = tmp;
        j--;
        }
        if (arr[i] == arr[j])
        {
          break;
        }
      }
      for (int i = 0; i < num; i++)
      {
        printf("%d ", arr[i]);
      }
  return 0;
}