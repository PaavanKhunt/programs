// Write a C program to check if the character is special character or not.

#include <stdio.h>

int main()
{
  char ch;
  printf("Enter a character: ");
  scanf("%c", &ch);
  char special_chars[] = {'!', '@', '#', '$', '%', '^', '&', '*', '(', ')', '_', '+', '-', '=', '{', '}', '[', ']', '|', '\\', ':', ';', '"', '\'', '<', '>', ',', '.', '?', '/', '~', '`', ' '};
  int i;
  for (i = 0; i < sizeof(special_chars); i++)
  {
    if (ch == special_chars[i])
    {
      printf("%c is a special character.\n", ch);
      break;
    }
    else
    {
      printf("%c is not a special character.\n", ch);
      break;
    }
  }
  return 0;
}
