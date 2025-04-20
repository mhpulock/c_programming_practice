#include<stdio.h>
int main()
{
    int num;
  scanf("%d", &num);
  int arr[num+1];
  for (int i = 0; i < num; i++)
  {
    scanf("%d", &arr[i]);
  } 
  int indx, val;
  scanf("%d %d", &indx, &val);
  for (int i = num+1; i > indx; i--)
  {
    arr[i] = arr[i-1];
    
  }
  arr[indx] = val;
  for (int i = 0; i <= num; i++)
  {
    printf("%d ", arr[i]);
  }
  
  return 0;
}