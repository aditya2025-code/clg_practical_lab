/*
20.	Menu-driven calculator using loop
Write a C program that repeatedly asks the user to choose an operation (+, -, *, /) and two numbers, performs the operation, and continues until the user chooses to exit (use a loop).
*/
#include <stdio.h>
int main()
{
  int n;
  do
  {
    char c;
    float a, b;
    printf("Enter two number: ");
    scanf("%f %f", &a, &b);
    printf("Enter the operator: ");
    scanf("\n%c", &c);
    switch (c)
    {
    case '+':
      printf("%.2f %c %.2f = %.2f", a, c, b, a + b);
      break;
    case '-':
      printf("%.2f %c %.2f = %.2f", a, c, b, a - b);
      break;
    case '*':
      printf("%.2f %c %.2f = %.2f", a, c, b, a * b);
      break;
    case '/':
      printf("%.2f %c %.2f = %.2f", a, c, b, a / b);
      break;
    case '%':
      int a1 = (int)a;
      int b1 = (int)b;
      printf("%d %c %d = %d", a1, c, b1, a1 % b1);
      break;
    default:
      printf("\nOnly use this kind of oparator (+,-,*,/,%)");
    }
    printf("\n\tFOR CONTINUE ENTER 1 or FOR EXIT ENTER 0\n");
    scanf("%d", &n);
  } while (n != 0);
  return 0;
}
// OUTPUT:
/*
Enter two number: 2 2
Enter the operator: +
2.00 + 2.00 = 4.00
        FOR CONTINUE ENTER 1 or FOR EXIT ENTER 0
1
Enter two number: 5 5
Enter the operator: 5

Only use this kind of oparator (+,-,*,/,)
        FOR CONTINUE ENTER 1 or FOR EXIT ENTER 0
1
Enter two number: 11 2
Enter the operator: %
11 % 2 = 1
        FOR CONTINUE ENTER 1 or FOR EXIT ENTER 0
0
*/