#include<stdio.h>
int main()
{
    int r,c;
  scanf("%d%d", &r, &c);
  int arr[100][100];
int flag;

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
        scanf("%d", &arr[i][j]);
    }
  }

  if(r==c){
    flag =0;
    for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
        if (i==j)
        {
            if (arr[i][j] == 1)
            {

            }
            else{
                flag = 1;
                break;
            }
        }
        else if (i+j == r-1)
        {
            if (arr[i][j] == 1)
            {

            }
            else{
                flag = 1;
                break;
            }
        }
        else if (i!=j)
        {
            if (arr[i][j] == 0)
            {

            }
            else{
                flag = 1;
                break;
            }
        }
        else if (i+j != r-1)
        {
            if (arr[i][j] == 0)
            {

            }
            else{
                flag = 1;
                break;
            }
        }
        
        
        
    }
  }

  if (flag == 0)
  {
    printf("YES");
  }
  if(flag == 1){
    printf("NO");
  }
  }
  else
  {
    printf("NO");
  }
 
  return 0;
}