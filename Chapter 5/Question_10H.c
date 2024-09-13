// Write a function to print "Hot" or "cold" depends on the temperature user enters.

#include <stdio.h>

int Temperature(int n);

int main()
{
  int n;
  printf("enter a temperature : ");
  scanf("%d", &n);

  Temperature(n);
}

int Temperature(int n)
{
  if (n <= 40)
  {
    printf("Cold environment");
  }
  else
  {
    printf("Hot environment");
  }
}