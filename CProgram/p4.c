// Write a program by using switch case if user enter 11 it will have are area of circle and when user enter 22 it will have area of rectangle and when user enter 33 it will give area of square when user enter 44 it will give area of triangle.

#include <stdio.h>
int main()
{
  int a;
  printf("Enter the number\n");
  scanf("%d", &a);
  switch (a)
  {
  case 11:
    printf("Area of circle is %f", 3.14 * a * a);
    break;
  case 22:
    printf("Area of rectangle is %d", a * a);
    break;
  case 33:
    printf("Area of square is %d", a * a);
    break;
  case 44:
    printf("Area of triangle is %d", a * a * 1 / 2);
    break;
  default:
    printf("Invalid input");
  }
  return 0;
}