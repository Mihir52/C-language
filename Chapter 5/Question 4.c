// Factorial of n.

#include <stdio.h>

int fact(int n);

int main()
{
  printf("factorial is : %d", fact(5));
  return 0;
}

int fact(int n)
{
  if (n == 0)
  {
    return 1;
  }
  // fact(n-1) * n
  // 5! = 4*3*2*1 = 24 * 5 = 120  
  int factNm1 = fact(n - 1);
  int factN = factNm1 * n;
  return factN;
}