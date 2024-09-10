// Write a program to find if a character entered by user is uppercase or not.

#include <stdio.h>

int main()
{
  char ch;
  printf("Enter a english letter : ");
  scanf("%c", &ch);

  if (ch >= 'A' && ch <= 'Z'){
    printf("upper-case letter");
  }
  else if(ch >= 'a' && ch <= 'z'){
    printf("lower-case letter");
  }
  else{
    printf("not english letter");
  }
  return 0;
}