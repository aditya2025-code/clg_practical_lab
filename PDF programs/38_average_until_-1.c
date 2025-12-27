/*
38.	Read until -1 and compute average
Write a C program that repeatedly reads integers from the user until -1 is entered, then prints the average of all numbers (excluding -1) using a loop.
*/

 
#include <stdio.h>

int main() {
    
    int a,sum=0,count=0,avg;
    do
    {
        printf("Enter the number: ");
        scanf("%d",&a);
        if(a == -1)
        break;
        sum += a;
        count++;
    } while(a!=-1);
    avg = sum / count;
    printf("Average= %d",avg);
    return 0;
}

// OUTPUT:
/*
Enter the number: 80
Enter the number: 90
Enter the number: 80
Enter the number: 70
Enter the number: 70
Enter the number: -1
Average= 78
*/