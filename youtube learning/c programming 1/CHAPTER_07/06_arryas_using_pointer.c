#include <stdio.h>

int main(){
  int marks[] = {54,33,67,56};
  int *pointer = &marks[0];

  for (int i = 0; i < 4; i++)
  {
    printf("The value of marks%d is %d\n",i,*pointer);
    *pointer++;
  }
  
  return 0;
}