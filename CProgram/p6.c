// Write a C code To find LCM of two integers.

#include <stdio.h>

int main()
{
  int a, b, c;
  printf("Enter first number: ");
  scanf("%d", &a);
  printf("Enter second number: ");
  scanf("%d", &b);
  c = a * b;
  while (a != 0 && b != 0)
  {
    if (a > b)
      a = a % b;
    else
      b = b % a;
  }

  printf("LCM is %d", c / (a + b));
  return 0;
}
