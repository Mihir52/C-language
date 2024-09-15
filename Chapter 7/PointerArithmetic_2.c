#include <stdio.h>

int main()
{
  int age = 22;
  int *ptr = &age;

  int _age = 40;
  int *_ptr = &_age;

  printf("%u %u\n", ptr, _ptr);
  printf("difference = %u\n", ptr - _ptr);

  _ptr = &age;
  printf("difference = %u\n", ptr == _ptr);
}