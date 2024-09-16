#include <stdio.h>


int main()
{
  char firstname[100];
  printf("enter your name : ");
  fgets(firstname ,100 ,stdin);
  puts(firstname);
  printf("your name is : %s",firstname);
}

