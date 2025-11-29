//Q2: WAP in C to find fizzbuzz,fizz or buzz, numbers from 1 upto 30 using while loop and for loop

// #include<stdio.h>
// void main()
// {
//   int n,i=1;
//   printf("How much is it to check: ");
//   scanf("%d",&n);
//   while(i<=n)
//   {
//     if((i % 3 == 0) && (i % 5 == 0))
//     {
//       printf("%d is Fizzbuzz\n",i);
//     }
//     else if(i % 3 == 0)
//     {
//       printf("%d is Fizz\n",i);
//     }
//     else if(i % 5 == 0)
//     {
//       printf("%d is buzz\n",i);
//     }
//     i++;
//   }

// }

#include<stdio.h>
void main()
{
  int n,i;
  printf("How much is it to check: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if((i % 3 == 0) && (i % 5 == 0))
    {
      printf("%d is Fizzbuzz\n",i);
    }
    else if(i % 3 == 0)
    {
      printf("%d is Fizz\n",i);
    }
    else if(i % 5 == 0)
    {
      printf("%d is buzz\n",i);
    }
  }

}