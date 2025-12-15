/*
50.	Do-while menu for repeated input
Write a C program using a do-while loop to repeatedly display a menu with options (e.g., “1. Enter number 2. Print square 3. Exit”) and perform the selected operation until the user chooses to exit
*/
#include <stdio.h>

int main()
{
  int n, n1, square;
  do
  {
    printf("\nEnter a number: ");
    scanf("%d", &n1);
    printf("Enter 2 To print Square of the number or Enter 3 for Exit:");
    scanf("%d", &n);
    if (n == 3)
      break;
    else if (n == 2)
    {
      square = n1 * n1;
      printf("Square of %d = %d\n", n1, square);
    }
    else
      printf("invalid input");
  } while (n != 3);
  return 0;
}
// OUTPUT:
/*

Enter a number: 3
Enter 2 To print Square of the number or Enter 3 for Exit:2
Square of 3 = 9

Enter a number: 1
Enter 2 To print Square of the number or Enter 3 for Exit:2
Square of 1 = 1

Enter a number: 25
Enter 2 To print Square of the number or Enter 3 for Exit:2
Square of 25 = 625

Enter a number: 2525
Enter 2 To print Square of the number or Enter 3 for Exit:2
Square of 2525 = 6375625

Enter a number: 3
Enter 2 To print Square of the number or Enter 3 for Exit:3
*/