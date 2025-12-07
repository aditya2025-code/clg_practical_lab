// Write a program to compare two string using strcmp:
#include <stdio.h>
#include <string.h>
// we need srting . header file for using strcmp
void main()
{
  int check;
  char a[20], b[10];
  printf("Enter the first name: ");
  scanf("%s", &a);
  printf("Enter the second name: ");
  scanf("%s", &b);
  check = strcmp(a, b);
  // If the string a and b value are same then strcmp will return 0 otherwise it's return +1 or -1
  if (check == 0)
    printf("Same");
  else
    printf("Not same");
}
// OUTPUT1:
/*
Enter the first name: adiTya
Enter the second name: adiTya
Same
   OUTPUT2:
Enter the first name: Adi
Enter the second name: adi
Not same
*/