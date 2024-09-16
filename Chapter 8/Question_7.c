// Write a function to count the occurrence of vowels in a string.

#include <stdio.h>

int findVowel(char str[]);

int main()
{
  char str[] = "hello";
  printf("Vowels are %d", findVowel(str));
}

int findVowel(char str[])
{
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u')
    {
      count++;
    }
  }
  return count;
}