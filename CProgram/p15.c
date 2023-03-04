// Write a C program to find out maximum and minimum value in an array.

#include <stdio.h>

int main()
{
  int n, i, j, max, min;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  int a[n];
  printf("Enter the elements: ");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  max = a[0];
  min = a[0];
  for (i = 0; i < n; i++)
  {
    if (a[i] > max)
      max = a[i];
    if (a[i] < min)
      min = a[i];
  }
  printf("Maximum element is: %d\n", max);
  printf("Minimum element is: %d\n", min);
  return 0;
}
