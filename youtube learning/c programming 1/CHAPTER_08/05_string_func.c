#include <stdio.h>
#include<string.h>
int main(){
  char st[] = "Aditya";
  char st1[50] = "adi";
  char st2[50] = " das";
  // printf("%d",strlen(st));
  char target[50];
  strcpy(target,st);
  printf("%s %s\n",st,target);
  strcat(st1,st2);
  printf("%s\n", st1);
  int a = strcmp("adi","das");
  printf("%d",a);
  return 0;
}