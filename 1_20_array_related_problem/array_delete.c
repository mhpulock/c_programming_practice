#include<stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    int arr[num];
    for (int i = 0; i < num; i++)
    {
      scanf("%d", &arr[i]);
    } 
    int indx;
    scanf("%d", &indx);
    for (int i = indx; i < num; i++)
    {
       arr[i] = arr[i+1];
    }
    for (int i = 0; i < num-1; i++)
    {
      printf("%d ", arr[i]);
    }
  return 0;
}