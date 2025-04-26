#include<stdio.h>
#include<string.h>
int main()
{
  char val[100000];
  scanf("%s", &val);
  int count = 0;
  for (int i = 0; i < strlen(val); i++)
  {
    if (val[i] != 'a' && val[i] != 'e' && val[i] != 'i' && val[i] != 'o' && val[i] != 'u')
    {
        count++;
    }
  }
  printf("%d", count);
  return 0;
}