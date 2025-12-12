// write a program in c to display day on a month depand on user input using nested if else  :

#include <stdio.h>

int main()
{
  int a, x;
  printf("Enter the day: ");
  scanf("%d", &a);

  if (a >= 1 && a <= 30)
  {
    x = a % 7;

    if (x == 0)
    {
      printf("%d is Friday", a);
    }
    else
    {
      if (x == 1)
      {
        printf("%d is Saturday", a);
      }
      else
      {
        if (x == 2)
        {
          printf("%d is Sunday", a);
        }
        else
        {
          if (x == 3)
          {
            printf("%d is Monday", a);
          }
          else
          {
            if (x == 4)
            {
              printf("%d is Tuesday", a);
            }
            else
            {
              if (x == 5)
              {
                printf("%d is Wednesday", a);
              }
              else
              {
                printf("%d is Thursday", a);
              }
            }
          }
        }
      }
    }
  }
  else
  {
    printf("You entered invalid Day");
  }

  return 0;
}
//OUTPUT:
/*
Enter the day: 30
30 is Sunday
*/