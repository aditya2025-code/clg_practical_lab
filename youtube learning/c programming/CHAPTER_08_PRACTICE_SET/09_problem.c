#include <stdio.h>
#include <string.h>
int main()
{
  char c = 'o';
  int contains = 0;
  char str[] = "aditya Das";
  for (int i = 0; i < strlen(str); i++)
  {
    if (str[i] == c)
    {
      contains = 1;
      break;
    }
  }
  if (contains)
  {
    printf("YES!! The charracter contains");
  }
  else
    printf("The charracter is not here");
  return 0;
}