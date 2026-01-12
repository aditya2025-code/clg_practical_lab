// 77. Design a modular solution: write functions for readArray(), printArray(), sumArray() and call them from main().

#include <stdio.h>

int sizeofArray();
int readArray(int *, int);
int printArray(int *, int);
int sumArray(int *, int);

int main()
{
  int n = sizeofArray();
  int a[n];
  readArray(&a[0], n);
  printArray(&a[0], n);
  sumArray(&a[0], n);
  return 0;
}

int sizeofArray()
{
  int a;
  printf("Enter Array size: ");
  scanf("%d", &a);
  return a;
}

int readArray(int *arr, int n)
{
  for (int i = 0; i <= n - 1; i++)
  {
    printf("Enter the element of index %d: ", i);
    scanf("%d", &*(arr + i));
  }
  return 0;
}

int printArray(int *arr, int n)
{
  printf("Array element = ");
  for (int i = 0; i < n; i++)
    printf("%d ", *(arr + i));
  return 0;
}

int sumArray(int *arr, int n)
{
  int sum = 0;
  for (int i = 0; i < n; i++)
    sum += *(arr + i);
  printf("\nSum of the Array = %d", sum);
  return 0;
}
// OUTPUT:
/*
Enter Array size: 5
Enter the element of index 0: 50
Enter the element of index 1: 50
Enter the element of index 2: 40
Enter the element of index 3: 60
Enter the element of index 4: 100
Array element = 50 50 40 60 100
Sum of the Array = 300
*/