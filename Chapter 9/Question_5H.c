// Write a program to read a string from a file & output to the user.

#include <stdio.h>

int main(){
  FILE *fptr;
  fptr = fopen("Test.txt","r");
  char ch;
  while (ch != EOF)
  {
    printf("%c",ch);
    ch = fgetc(fptr);
  }
  
}