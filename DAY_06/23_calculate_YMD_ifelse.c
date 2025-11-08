//write a program in c to caculate remaining year,month,day from a given input useing if-else:

#include <stdio.h>

int main()
{
  int d, y, m;

  printf("Enter total number of days: ");
  scanf("%d", &d);

  if (d >= 365)
  {
    y = d / 365;
    d = d % 365;
    m = d / 30;
    d = d % 30;
    printf("%d Year %d Month %d Day",y,m,d);
  }
  else if (d >= 30)
  {
    y = 0;
    m = d / 30;
    d = d % 30;
    printf("%d Year %d Month %d Day",y,m,d);
  }
  else
  {
    y = 0;
    m = 0;
    printf("%d Year %d Month %d Day",y,m,d);
  }
  return 0;
}
