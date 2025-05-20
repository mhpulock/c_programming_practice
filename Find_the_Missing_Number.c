#include<stdio.h>
int main()
{
  long long int n;
  scanf("%d", &n);
  long long int arr[100][100];
  long long int mul,a,b,c;
  long long int mul1;
  long long int res;
  for (int i = 0; i < n; i++)
  {
    scanf("%lld%lld%lld%lld", &mul, &a, &b, &c);
    mul1 = a*b*c;

    if (mul%mul1 == 0)
      {
        res = mul / mul1;
        printf("%lld\n", res);
      }
      else
      {
        printf("-1\n");
      }
  }

  return 0;
}