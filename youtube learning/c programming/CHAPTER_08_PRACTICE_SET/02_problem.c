#include <stdio.h>
#include <string.h>
int main(){
  char str[7];
  // scanf("%6s",str);
  for (int i = 0; i < 6; i++)
  {
    scanf(" %c",&str[i]);
  }
  str[6] ='\0';
  printf("%s",str);
  return 0;
}