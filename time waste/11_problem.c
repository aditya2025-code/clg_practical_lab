//Write a program that takes a student’s mark (0–100) and prints the grade based on this range switch statement:

// 90–100: A

// 80–89: B

// 70–79: C

// 60–69: D

// Below 60: F

#include <stdio.h>

int main(){
  int marks, a;
  char grade;
  printf("Enter marks (0-100): ");
  scanf("%d",&marks);
  a = marks / 10;
  switch(a)
  {
    case 10:
    case 9: grade = 'A';
    break;
    case 8: grade = 'B';
    break;
    case 7: grade = 'C';
    break;
    case 6: grade = 'D';
    break;
    default: grade = 'F';
    break;
  }
  printf("The grade is %c",grade);
  return 0;
}
