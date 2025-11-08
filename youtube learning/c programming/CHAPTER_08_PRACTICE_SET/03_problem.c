#include <stdio.h>

int strlength(char str[]){
  int i = 0;
  char c = str[i];
  int count;
  while (c != '\0')
  {
    c = str[i];
    i++;
  }
  count = i-1;
}
int main(){
  char str[] = "aditya";

  printf("%d",strlength(str));
  return 0;
}