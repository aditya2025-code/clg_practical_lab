// Write a program to check grade point best on five subject using nested if-else:

#include <stdio.h>

int main()
{
  float bio, eng, phy, ch, m, avg;
  printf("Enter the Biology , English , Physic , Chemestry and Math marks (side by side)\n");
  scanf("%f %f %f %f %f", &bio, &eng, &phy, &ch, &m);
  avg = (bio + eng + phy + ch + m) / 5.0;
  int avg1 = (int)avg;
  printf("Your average is %d\n", avg1);
  if (avg1 >= 90 && avg1 <= 100)
  {
    printf("%d grade = O", avg1);
  }
  else if (avg1 >= 80 && avg1 <= 89)
  {
    printf("%d grade = E", avg1);
  }
  else if (avg1 >= 70 && avg1 <= 79)
  {
    printf("%d grade = A", avg1);
  }
  else if (avg1 >= 60 && avg1 <= 69)
  {
    printf("%d grade = B", avg1);
  }
  else if (avg1 >= 50 && avg1 <= 59)
  {
    printf("%d grade = C", avg1);
  }
  else if (avg1 >= 40 && avg1 <= 49)
  {
    printf("%d grade = D", avg1);
  }
  else
  {
    printf("%d grade = Fail", avg1);
  }
  return 0;
}