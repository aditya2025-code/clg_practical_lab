#include <stdio.h>
#include<string.h>
int main(){
  char c = 'a';
  int count = 0;
  char str[] = "aditya Das";
  for (int i = 0; i < strlen(str); i++)
  {
    if(str[i] == c){
      count++;
    }
  }
  printf("%d",count);
  return 0;
}