// write a program in c to display day on a month depand on user input using if else if ladder :

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
    else if (x == 1)
    {
      printf("%d is saturday", a);
    }
    else if (x == 2)
    {
      printf("%d is Sunday", a);
    }
    else if (x == 3)
    {
      printf("%d is Monday", a);
    }
    else if (x == 4)
    {
      printf("%d is tuesday", a);
    }
    else if (x == 5)
    {
      printf("%d is Wednesday", a);
    }
    else if (x == 6)
    {
      printf("%d is Thursday", a);
    }
  }
  else
  {
    printf("You entered invalid Day");
  }
  return 0;
}
//OUTPUT1:
/*
Enter the day: 20
20 is Thursday
*/
//OUTPUT2:
/*
Enter the day: 200
You entered invalid Day
*/