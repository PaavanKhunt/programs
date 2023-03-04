// Write a program in c to copy the elements of one array to another array.

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int size;
  printf('Enter the size of array: ');
  scanf('%d', &size);
  int arr[size];
  int arr2[size];
  printf('Enter the elements of array: ');
  for (int i = 0; i < size; i++)
  {
    scanf('%d', &arr[i]);
  }
  for (int i = 0; i < size; i++)
  {
    arr2[i] = arr[i];
  }
  printf('\nElements of array: ');
  for (int i = 0; i < size; i++)
  {
    printf('%d ', arr2[i]);
  }

  return 0;
}
