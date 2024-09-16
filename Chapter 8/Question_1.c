// Create a string firstname & lastname to store details of user & print all the characters using a loop.

#include <stdio.h>

void printStr(char arr[]);

int main()
{
  char firstname[] = "mihir";
  char lastname[] = "parate";

  printStr(firstname);
  printStr(lastname);
}

void printStr(char arr[])
{
  for (int i = 0; arr[i] != '\0'; i++)
  {
    printf("%c", arr[i]);
  }
  printf("\n");
}
