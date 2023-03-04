// Write a program in C to separate the individual character of a string.

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

int main(int argc, char const *argv[])
{
  char str[100];
  printf("Enter a string: ");
  scanf("%s", str);
  int i;
  for (int i = 0; i < str_len(str); i++)
  {
    printf("%c  ", str[i]);
  }
  return 0;
}
