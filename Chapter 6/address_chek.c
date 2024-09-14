#include <stdio.h>

int main()
{
  int age = 22;
  int *ptr = &age;

  // address
  // printf("%p\n", &age);
  printf("%u\n", &age); // same address
  printf("%u\n", ptr);  // same address

  printf("%u\n", &ptr); // different address

  return 0;
}



/*
int main()
{
  int age = 22;
  int *ptr = &age;

  printf("%d\n", age);
  printf("%d\n", *ptr);
  printf("%d\n", *(&age));
}
*/
