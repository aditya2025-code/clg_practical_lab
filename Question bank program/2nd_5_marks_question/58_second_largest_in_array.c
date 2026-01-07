// 58. Write a C program to find the second largest element in an array (without sorting).
#include <stdio.h>

int main(){
  int n;
  printf("Enter The Array size: ");
  scanf("%d",&n);
  int a[n],max,sec_max,count;
  printf("Enter the Array element: ");
  for(int i;i<=n-1;i++)
  {
    scanf("%d",&a[i]);
  }
  max = a[1],sec_max=a[0],count=0;
  for(int i;i<n;i++)
  {
    if(a[i]>max){
      sec_max=max;
      max=a[i];
    }
    else if(a[i]>sec_max && a[i] != max)
    sec_max=a[i];
    else
    count++;
  }
  (count != n)?printf("Second Largest element is %d",sec_max):printf("All array elements are same");
  return 0;
}
//OUTPUT1:
/*
Enter The Array size: 10
Enter the Array element: 1 2 3 4 5 6 7 0 8 9
Seconf Largest element is 8
*/
//OUTPUT1:
/*
Enter The Array size: 5
Enter the Array element: 1 1 1 1 1
All array elements are same
*/