// chapter - 6 : pointer

#include <stdio.h>

int main()
{
  int age = 22;
  int *ptr = &age;
  int _age = *ptr;

  printf("%d\n", _age);
  printf("%u\n", ptr);
  printf("%u\n", &age);
}