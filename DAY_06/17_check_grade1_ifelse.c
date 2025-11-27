// Write a program to check grade point best on five subject using nested if-else:

#include <stdio.h>

int main()
{
  float bio, eng, phy, ch, m, avg;
  char grade;

  printf("Enter the Biology , English , Physic , Chemestry and Math marks (side by side)\n");

  scanf("%f %f %f %f %f", &bio, &eng, &phy, &ch, &m);

  avg = (bio + eng + phy + ch + m) / 5.0;

  int avg1 = (int)avg;

  if (avg1 >= 90 && avg1 <= 100)
  {
    grade = 'O';
  }
  else
  {
    if (avg1 >= 80)
    {
      grade = 'E';
    }
    else
    {
      if (avg1 >= 70)
      {
        grade = 'A';
      }
      else
      {
        if (avg1 >= 60)
        {
          grade = 'B';
        }
        else
        {
          if (avg1 >= 50)
          {
            grade = 'C';
          }
          else
          {
            if (avg1 >= 40)
            {
              grade = 'D';
            }
            else
            {
              grade = 'F';
            }
          }
        }
      }
    }
  }
  printf("Your average is %d\n", avg1);
  printf("Your Grade = %c", grade);
  return 0;
}