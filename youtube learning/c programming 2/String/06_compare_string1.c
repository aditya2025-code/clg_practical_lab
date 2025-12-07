// Write a program to compare two string:
#include <stdio.h>
#include <string.h>
void main()
{
  int check = 0;
  char a[20], b[10];
  printf("Enter the first name: ");
  scanf("%s", &a);
  printf("Enter the second name: ");
  scanf("%s", &b);
  for (int i = 0; a[i] != '\0'; i++)
  {
    if (a[i] != b[i])
    {
      check = 1;
      break;
    }
  }
  if (check == 0)
    printf("SAME");
  else
    printf("Not same");
}
// OUTPUT1:
/*
Enter the first name: ADitya
Enter the second name: ADitya
SAME
// OUTPUT2:
Enter the first name: adI
Enter the second name: adi
Not same
*/