#include<stdio.h>
#include<string.h>
int main()
{
  int t;
  scanf("%d", &t);
  char arr[t][10000];
  int capital, small, digit;
  for (int i = 0; i < t; i++)
  {
   scanf("%s", &arr[i]); 

  }
    for (int i = 0; i < t ; i++)
    {
        for (int j = 0; arr[i][j] != '\0'; j++)
        {
        if (arr[i][j] >= 'A' && arr[i][j] <= 'Z')
        {
        capital++;
        
        }
        else if (arr[i][j] >= 'a' && arr[i][j] <= 'z')
        {
        small++;
        }
        else if (arr[i][j] >= '0' && arr[i][j] <= '9')
        {
        digit++;
        }
        }
        printf("%d %d %d", capital, small, digit);
        capital = 0, small = 0, digit = 0;
         printf("\n");
    }
  
    

  return 0;
}