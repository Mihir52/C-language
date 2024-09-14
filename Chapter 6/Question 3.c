// Swap 2 numbers, a & b

#include <stdio.h>

void swap(int a, int b);
void __swap(int *a, int *b);

int main()
{
  // int x = 3, y = 5;
  // swap(x, y);
  // printf("x = %d & y = %d\n", x, y);
  // return 0;

  int x = 3, y = 5;
  __swap(&x, &y);
  printf("x = %d & y = %d\n", x, y);
}

// call by value
void swap(int a, int b)
{
  int t = a;
  a = b;
  b = t;
  printf("a = %d & b = %d\n", a, b);
}

// call by reference
void __swap(int *a, int *b)
{
  int t = *a;
  *a = *b;
  *b = t;
  // printf("a = %d & b = %d\n", a, b);
}