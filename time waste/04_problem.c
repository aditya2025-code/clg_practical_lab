// #include<stdio.h>
// void main(){
//   int i,j,n;
//   printf("Enter the row: ");
//   scanf("%d",&n);
//   for(i=1;i<=n;i++)
//   {
//     for (j=n;j>=i;j--)
//     {
//       printf("*");
//     }
//     printf("\n");
//   }
// }
#include<stdio.h>
void main(){
  int i,j,n;
  printf("Enter the row: ");
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {
    for (j=1;j<=i;j++)
    {
      printf("*");
    }
    printf("\n");
  }
}