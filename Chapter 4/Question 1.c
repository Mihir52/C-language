// Print the sum of first n natural numbers.

#include <stdio.h>
int main()
{
  int n;
  printf("enter a number : ");
  scanf("%d", &n);

  int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    sum = sum + i;
  }
  printf("sum is %d", sum);

  // reverse number print
  // for (int i = n; i >=1; i--)
  // {
  //   printf("%d\n",i);
  // }

  return 0;
}