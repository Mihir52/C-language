// Print the table of a number input by the user.

#include <stdio.h>
int main()
{
  int n;
  printf("enter a number: ");
  scanf("%d", &n);

  for (int i = 1; i <= 10; i++)
  {
    printf("%d\n", n * i);
  }
}