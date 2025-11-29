//Q4: WAP in C to display all leap year from 2000 up to 2999 using for and while loop.
// #include<stdio.h>
// void main()
// {
//   int i , n;
//   printf("From which year to how much year to check: ");
//   scanf("%d %d",&i,&n);
//   for( ;i<=n;i++)
//   {
//     if((i % 400 ==0) || (i % 4 ==0 && i % 100 != 0))
//     {
//       printf("%d is Leap Year\n",i);
//     }
//   }
// }

#include<stdio.h>
void main()
{
  int i , n;
  printf("From which year to how much year to check: ");
  scanf("%d %d",&i,&n);
  while(i<=n)
  {
    if((i % 400 ==0) || (i % 4 ==0 && i % 100 != 0))
    {
      printf("%d is Leap Year\n",i);
    }
    i++;
  }
}