// Write a C program to print "True" if the given number's right most digit is even and second last right most digit is odd otherwise "False"
#include <stdio.h>
int main()
{
  int n, rem, rem1;
  printf("Enter a number: ");
  scanf("%d", &n);
  rem = n % 10;
  rem1 = n % 100;
  rem1 = rem1 / 10;
  if (rem % 2 != 0 && rem1 % 2 == 0)
    printf("True");
  else
    printf("False");
  return 0;
}