// Check if a given character is present in a string or not.

#include <stdio.h>

void checkCharacter(char str[], char ch);

int main()
{
  char str[] = "mihir";
  char ch = 'm';
  checkCharacter(str, ch);

}

void checkCharacter(char str[], char ch)
{
  for (int i = 0; str[i] != '\0'; i++)
  {
    if (str[i] == ch)
    {
      printf("character included",ch);
      return;
    }
  }
  printf("character NOT included",ch);
}