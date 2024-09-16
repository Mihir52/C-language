// Make a program that inputs user's name & prints its length

#include <stdio.h>
#include <string.h>

/*
int countLength(char arr[]);

int main()
{
  char name[100];
  fgets(name, 100, stdin);
  printf("length is : %d", countLength(name));
}

int countLength(char arr[])
{
  int count = 0;
  for (int i = 0; arr[i] != '\0'; i++)
  {
    count++;
  }
  return count - 1;
}
*/

int main(){
  char name[] = "hel";
  printf("length is %d",strlen(name));
}