// write a program in c to display day on a month depand on user input using switch statement :

#include <stdio.h>

int main()
{
  int a, x;
  printf("Enter the day (1-30): ");
  scanf("%d", &a);

  if (a >= 1 && a <= 30)
  {
    x = a % 7; 

    switch (x)
    {
    case 0:
      printf("%d is Friday", a);
      break;

    case 1:
      printf("%d is Saturday", a);
      break;

    case 2:
      printf("%d is Sunday", a);
      break;

    case 3:
      printf("%d is Monday", a);
      break;

    case 4:
      printf("%d is Tuesday", a);
      break;

    case 5:
      printf("%d is Wednesday", a);
      break;

    case 6:
      printf("%d is Thursday", a);
      break;
    }
  }
  else
  {
    printf("You entered invalid day");
  }
  return 0;
}

//OUTPUT:
/*
Enter the day (1-30): 13
13 is Thursday
*/