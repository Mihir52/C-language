// Sum of first n natural numbers.Using recursion

#include <stdio.h>

int sum(int n);

int main()
{
  printf("sum is : %d", sum(5));
  return 0;
}

// recursive function
int sum(int n)
{
  if (n == 1)
  {
    return 1;
  }
  int sumNm1 = sum(n - 1);
  int sumN = sumNm1 + n;
  return sumN;

  // n = 5 (n-1)+n
  // 4+3+2+1 = 10 + 5 = 15
}
