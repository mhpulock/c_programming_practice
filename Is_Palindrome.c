#include<stdio.h>
#include <string.h>
int check;
int is_palindrome(char str[]){
    int len;
    len = strlen(str);
    int j= len-1;
   char str2[1000];
   int i;           
    for(i = 0; j >= 0; i++)
    {
        str2[i] = str[j];
        j--;
    }
    str2[i] = '\0';
    check = strcmp(str, str2);
    check++;

   return check;
}

int main()
{ 
    int valu;
  char str[1000];
  scanf("%s", &str);
  valu = is_palindrome(str);
    if (valu == 1)
    {
        printf("Palindrome\n");
    }
    else if (valu == 0)
    {
        printf("Not Palindrome\n");
    }
    
  return 0;
}