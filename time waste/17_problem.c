//write a program in c to sum of N number using for loop:
#include<stdio.h>
void main()
{
  int i,n,a = 0;
  printf("Enter the Number: ");
  scanf("%d",&n);
  printf("1");
  for(i = 1; i <= n; i++)
  {
    a = a + i;
    if(i>1)
    {
    printf("+%d",i);
    }
  }
  printf(" = %d",a);
}