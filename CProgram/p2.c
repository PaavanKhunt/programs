// Write a C Program to find the power of any given number.

#include <stdio.h>

int main()
{
  int base, power, result;
  printf("Enter the base number: ");
  scanf("%d", &base);
  printf("Enter the power number: ");
  scanf("%d", &power);
  for (result = 1; power > 0; power--)
  {
    result = result * base;
  }
  printf("%d", result);
  return 0;
}
