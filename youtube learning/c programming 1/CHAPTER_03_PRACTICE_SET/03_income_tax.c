// Up to ₹2,50,000 → 0%

// ₹2,50,001 – ₹5,00,000 → 5%

// ₹5,00,001 – ₹10,00,000 → 20%

// Above ₹10,00,000 → 30%
#include <stdio.h>

int main(){
  int income;
  float tax;
  printf("Enter the anual income in INR : \n");
  scanf("%d", &income);
  if(income<=250000){
    tax = 0;
  }
  else if(income<=500000){
    tax = (income-250000)*0.05;
  }
  else if(income<=1000000)
  tax = (250000*0.05)+(income-500000)*0.2;
  else {
    tax = (250000*0.05)+(500000*0.20)+(income-1000000)*0.3;
  }
  printf("Income tax in INR: %.2f", tax);
  return 0;
}