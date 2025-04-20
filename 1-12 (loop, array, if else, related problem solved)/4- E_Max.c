#include<stdio.h>
#include<limits.h>
int main()
{
  int mx = INT_MIN;
  int count;
  scanf("%d", &count);
  for (int i = 0; i < count; i++)
  {
    
    int num = 0;
    scanf("%d", &num);
    if (num > mx)
    {
        mx = num;
    }
    
  }
  printf("%d", mx);
  return 0;
}