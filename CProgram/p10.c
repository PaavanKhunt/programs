// Write a program to take a string from the user and a user choice.Do the following based on the choice given by the user.1. Total number of words in the string2.Occurance of a word in the string3.Find and replace a word in the string4.Exit

#include <stdio.h>

int string_length(char *s)
{
  if (*s == '\0')
  {
    return 0;
  }

  return (1 + string_length(++s));
}

int main()
{
  char str[100], word[100], new[100];
  int choice, count = 0;
  printf("Enter a string: ");
  gets(str);
  printf("Enter a choice: ");
  scanf("%d", &choice);
  switch (choice)
  {
  case 1:
    for (int i = 0; str[i] != '\0'; i++)
    {
      if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        count++;
    }
    printf("Total number of words in the string: %d", count + 1);
    break;

  case 2:
    printf("Enter a word: ");
    scanf("%s", word);
    for (int i = 0; str[i] != '\0'; i++)
    {
      if (str[i] == word[0])
      {
        for (int j = 0; word[j] != '\0'; j++)
        {
          if (str[i + j] != word[j])
            break;
          if (word[j + 1] == '\0')
            count++;
        }
      }
    }
    printf("Occurance of a word in the string: %d", count);
    break;
  case 3:
    printf("Enter a word: ");
    scanf("%s", word);
    printf("Enter a new word: ");
    scanf("%s", new);
    {
      int stringLen, subLen, newLen;
      int i = 0, j, k;
      int flag = 0, start, end;
      stringLen = string_length(str);
      subLen = string_length(word);
      newLen = string_length(new);

      for (i = 0; i < stringLen; i++)
      {
        flag = 0;
        start = i;
        for (j = 0; str[i] == word[j]; j++, i++)
          if (j == subLen - 1)
            flag = 1;
        end = i;
        if (flag == 0)
          i -= j;
        else
        {
          for (j = start; j < end; j++)
          {
            for (k = start; k < stringLen; k++)
              str[k] = str[k + 1];
            stringLen--;
            i--;
          }

          for (j = start; j < start + newLen; j++)
          {
            for (k = stringLen; k >= j; k--)
              str[k + 1] = str[k];
            str[j] = new[j - start];
            stringLen++;
            i++;
          }
        }
      }
    }
    printf("%s", str);

    break;
  case 4:
    return 0;
  }
}
