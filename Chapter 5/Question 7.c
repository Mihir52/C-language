// Write a function to print n terms of the 'fibonacci sequence'.

#include <stdio.h>
//  using recursion
int fib(int n);

int main()
{
  printf("%d", fib(6));
  return 0;
}

int fib(int n)
{
  if (n == 0)
  {
    return 0;
  }
  if (n == 1)
  {
    return 1;
  }

  int fibNm1 = fib(n - 1);
  int fibNm2 = fib(n - 2);

  int fibN = fibNm1 + fibNm2;
  // printf("fib of %d is %d\n", n, fibN);
  return fibN;
}

// using loop
/*
int main()
{
  int n, a, b, c,i;
  a = -1;
  b = 1;
  printf("enter a range : ");
  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    c = a + b;
    printf("%d,", c);
    a = b;
    b = c;
  }
}
*/
