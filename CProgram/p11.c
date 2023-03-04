// C program to store temperature of two cities of a week and display it using two dimensional array.

#include <stdio.h>

int main()
{
  int i, j;
  int city[2][7];
  printf("Enter temperature of two cities of a week: ");
  for (i = 1; i <= 2; i++)
  {
    for (j = 1; j <= 7; j++)
    {
      scanf("%d", &city[i][j]);
    }
  }
  printf("\nTemperature of two cities of a week: \n");
  for (i = 1; i <= 2; i++)
  {
    for (j = 1; j <= 7; j++)
    {
      printf("%d ", city[i][j]);
    }
    printf("\n");
  }

  return 0;
}
