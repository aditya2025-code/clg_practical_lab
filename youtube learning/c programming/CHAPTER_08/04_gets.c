/*#include <stdio.h>

int main()
{
  char st[5];
  gets(st);

  printf("The character is %s", st);

  return 0;
  }   //not working


#include <stdio.h>

int main() {
    char st[30];
    gets(st);               // takes input from user
    printf("%s", st);       // prints the same input
    return 0;
}**/

#include <stdio.h>

int main()
{
  char st[30];
  fgets(st, sizeof(st), stdin);
  //  printf("%s", st);
  puts(st);
  return 0;
}
