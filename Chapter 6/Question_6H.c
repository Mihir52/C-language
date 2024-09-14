// Write a program in c to find maximum number between two numbers using a pointer.

#include <stdio.h>

// using function
/*
int MaxNum(int *a, int *b);

int main()
{

  int a = 110;
  int b = 110;
  printf("a = %d b = %d\n", a, b);
  MaxNum(&a,&b);
}

int MaxNum(int *a, int *b)
{
  if (*a > *b)
  {
    printf("%d\n", *a);
  }
  else if (*a == *b)
  {
    printf("two numbers are same");
  }
  else
  {
    printf("%d\n", *b);
  }
}
*/

int main()
{
  int a = 205;
  int b = 200;

  printf("a = %d b = %d\n", a, b);

  int *ptr_a = &a;
  int *ptr_b = &b;

  if (*ptr_a > *ptr_b)
  {
    printf("Max = %d", *ptr_a);
  }
  else if (*ptr_a == *ptr_b)
  {
    printf("two numbers are same");
  }
  else
  {
    printf("Max = %d\n", *ptr_b);
  }
}
