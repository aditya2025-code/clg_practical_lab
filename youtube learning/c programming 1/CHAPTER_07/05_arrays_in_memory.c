#include<stdio.h>

int main() {

  int marks[5];

  printf("Enter the marks\n");

  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &marks[i]);
  }
  for (int i = 0; i < 5; i++)
  {
    printf("The address of %d is %u\n",i,&marks[i]);
  }
  
  return 0;
}