#include<stdio.h>
int count;
int count_before_one(int arr[], int n){

    for (int i = 0; i < n; i++)
    {
      if (arr[i] == 1)
      {
        break;
      }
      count++;
    }
    return count;
}
int main()
{
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  int valu = count_before_one(arr, n);
  printf("%d", valu);
  return 0;
}