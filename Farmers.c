#include<stdio.h>
int main()
{
  int t, m1, m2, d;
  scanf("%d", &t);
  for (int i = 0; i < t; i++)
  {
    scanf("%d %d %d", &m1, &m2, &d);
    int sum = (m1*d)/(m1+m2);
    printf("%d\n", d-sum);
  }
  
  return 0;
}