#include <stdio.h>

int main(){
  int y,m,d,total_day;
  printf("Enter Year, Month, Day: ");
  scanf("%d %d %d",&y,&m,&d);
  if (y > 0)
  {
    total_day = ((y * 365)+(m * 30)+ d);
    printf("Total day is %d",total_day);
  }
  else if(m > 0)
  {
    total_day = (m * 30) + d;
    printf("Total day is %d",total_day);
  }
  else
  {
    printf("Total day is %d",d);
  }
  return 0;
}