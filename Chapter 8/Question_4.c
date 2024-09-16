// Take a string input from the user using %c

#include <stdio.h>

int main(){
  char arr[100];
  char ch;
  int i;
  for (i = 0; ch != '\n'; i++)
  {
    scanf("%c",&ch);
    arr[i] = ch;
  }
  arr[i] = '\0';
  puts(arr);

  
}