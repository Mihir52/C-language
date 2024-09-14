// Write a program in C to print all the letters in english alphabet using a pointer.

#include <stdio.h>
int main(){
  char ch = 'a';
  char *ptr = &ch;

  while (*ptr = 'z')
  {
    printf("%c",*ptr);
    *(ptr)++;
  }
  
}