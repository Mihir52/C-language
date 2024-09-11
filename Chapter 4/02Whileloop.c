#include <stdio.h>

int main()
{
  /*
  int i = 1;
  while (i <= 5)
  {
    printf("hello world\n");
    i++;
  }
  */

  //  Q.Print the number from 0 to n, if n is given by user , n=4
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);

  int i = 0;
  while (i <= n)
  {
    printf("%d\n", i);
    i++;
  }

  return 0;
}