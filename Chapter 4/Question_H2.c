// Write a program to check if a number is prime or not.

#include <stdio.h>
int main()
{
  int n, i;
  printf("enter a number : ");
  scanf("%d", &n);

  for (i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      printf("Not prime");
      break;
    } 
  }
  if (i == n)
  {
    printf("%d",n);
  }
}
