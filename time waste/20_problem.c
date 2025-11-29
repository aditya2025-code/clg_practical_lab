//Q3: WAP in C to display even and Odd number from 1 up to 50 using for and while loop.
// #include<stdio.h>
// void main()
// {
//   int n,i;
//   printf("How much is it to check: ");
//   scanf("%d",&n);
//   for(i=1;i<=n;i++)
//   {
//     if(i % 2 == 0)
//     {
//       printf("%d is Even number\n",i);
//     }
//     else
//     {
//       printf("%d is Odd number\n",i);
//     }
//   }
// }
#include<stdio.h>
void main()
{
  int n,i;
  printf("How much is it to check: ");
  scanf("%d",&n);
  i=1;
  while(i<=n)
  {
    if(i % 2 == 0)
    {
      printf("%d is Even number\n",i);
    }
    else
    {
      printf("%d is Odd number\n",i);
    }
    i++;
  }
}