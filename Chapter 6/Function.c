#include <stdio.h>

void square(int n);

void __square(int *n);

int main()
{
  int number = 4;
  square(number);
  printf("number = %d\n", number);

  __square(&number);
  printf("number = %d\n", number);

  return 0;
}

// call by value
void square(int n)
{
  n = n * n;
  printf("Square = %d\n", n);
}

// call by reference
void __square(int *n)
{
  *n = (*n) * (*n);
  printf("Square = %d\n", *n);
}
