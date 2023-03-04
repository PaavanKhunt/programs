// Write a C code To find largest value from the array.

#include <stdio.h>

int main()
{
  int a[100], i, max;
  printf("Enter the number of elements: ");
  scanf("%d", &i);
  printf("Enter the elements: ");
  for (int j = 0; j < i; j++)
  {
    scanf("%d", &a[j]);
  }
  max = a[0];
  for (int j = 1; j < i; j++)
  {
    if (a[j] > max)
      max = a[j];
  }
  printf("Largest number is %d", max);

  return 0;
}
