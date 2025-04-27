#include<stdio.h>
#include <string.h>
int main()
{
  char arr[10000];
  scanf("%s", &arr);
  int freeq[26] = {0};
  for (int i = 0; i < strlen(arr) ; i++)
  {
    int indx = arr[i]-97;
    freeq[indx]++;
  }
  for (int i = 0; i < 26; i++)
  {
    if (freeq[i] > 0)
    {
      printf("%c - %d\n", i+97, freeq[i]);
    }
    
  }
  
  return 0;
}