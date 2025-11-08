#include <stdio.h>

void array(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n");
}
void reserve(int ar[], int n)
{
  int temp;
  for (int i = 0; i < n / 2; i++)
  {
    temp = ar[i];
    ar[i] = ar[n - i - 1];
    ar[n - i - 1] = temp;
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6};
  array(arr, 6);
  reserve(arr, 6);
  array(arr, 6);
  return 0;
}