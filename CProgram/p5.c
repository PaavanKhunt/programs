// Write a program in C to print individual characters of string in reverse order.

#include <stdio.h>

int str_len(char *str)
{
  int i = 0;
  while (str[i] != '\0')
  {
    i++;
  }
  return i;
}

int main()
{
  char str[100];
  printf("Enter a string: ");
  scanf("%s", str);
  int i, j;
  for (i = 0, j = str_len(str) - 1; i < j; i++, j--)
  {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }

  printf("%s\n", str);

  return 0;
}
