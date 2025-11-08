#include <stdio.h>

int main(){
  int array[3][2];
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("Enter the number of array[%d][%d] ",i,j);
      scanf("%d",&array[i][j]);
    }
    
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("The number of array[%d][%d] is %d\n",i,j,array[i][j]);
    }
    
  }
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("%d ",array[i][j]);
    }
    printf("\n");
  }
      
  return 0;
}