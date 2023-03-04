// Write a C code To find HCF of two numbers

#include <stdio.h>

int main()
{
  int a, b, hcf;
  printf("Enter first numbers: ");
  scanf("%d", &a);
  printf("Enter second numbers: ");
  scanf("%d", &b);
  while (a != 0 && b != 0)
  {
    if (a > b)
      a = a % b;
    else
      b = b % a;
  }
  hcf = a + b;
  printf("HCF is %d", hcf);

  return 0;
}
