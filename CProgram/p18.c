// Write a program in C to convert decimal number to binary number using the user defined function.

#include <stdio.h>

int main()
{
  int a[100], n, i;
  printf("Enter the decimal number: ");
  scanf("%d", &n);
  for (i = 0; n > 0; i++)
  {
    a[i] = n % 2;
    n = n / 2;
  }
  printf("\nThe binary number is: ");
  for (i = i - 1; i >= 0; i--)
  {
    printf("%d", a[i]);
  }
  return 0;
}