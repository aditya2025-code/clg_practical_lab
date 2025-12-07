#include <stdio.h>

int main(){
  char grade;
  int marks;
  printf("Enter the marks ");
  scanf("%d", &marks);
  if(marks<=100 && marks>=80){
    grade = 'A';
  }
  else if(marks<=79 && marks>=50){
    grade = 'B';
  }
  else if (marks<=49 && marks>=30){
  grade = 'C';
}
else{
  grade = 'F';
}
printf("Grade is %c", grade);
  return 0;
}