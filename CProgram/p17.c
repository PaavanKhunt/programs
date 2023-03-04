// Write a program in C to swap two numbers using the u

#include <stdio.h>

int main()
{
  int a, b;
  printf("Enter the value of a: ");
  scanf("%d", &a);
  printf("Enter the value of b: ");
  scanf("%d", &b);
  int u = a;
  a = b;
  b = u;
  printf("\nAfter swapping a = %d and b = %d", a, b);

  return 0;
}
