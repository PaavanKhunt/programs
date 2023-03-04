// Write a program in C to check a given number is even or odd using the user defined function.

#include <stdio.h>
void check(int n)
{
  if (n % 2 == 0)
    printf("Even");
  else
    printf("Odd");
}
int main()
{
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  check(n);
  return 0;
}
