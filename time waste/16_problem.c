//write a program in c to display n numbers which is odd and which is even :

#include<stdio.h>
void main()
{
  int n;
  printf("Enter the Number : ");
  scanf("%d",&n);
  for(int i = 1; i <= n; i++)
  {
    if(i % 2 == 0)
    {
      printf("%d is Even number\n",i);
    }
    else
    {
      printf("%d is odd number\n",i);
    }
  }
}