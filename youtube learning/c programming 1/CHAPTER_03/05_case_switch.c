#include <stdio.h>

int main(){
  int a;
  printf("Enter between 1-5 ");
  scanf("%d", &a);
  switch(a){
    case 1:
    printf("You entered 1");
    break;
    case 2:
    printf("You entered 2");
    break;
    case 3:
    printf("You entered 3");
    break;
    case 4:
    printf("You entered 4");
    break;
    case 5:
    printf("You entered 5");
    break;
    default:
    printf("Not in 1-5");
  }
  return 0;
}