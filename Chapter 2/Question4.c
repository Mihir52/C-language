// Write a program to check if a number is odd or even.

#include <stdio.h>
int main()
{
  // even => 1
  // odd  => 0
  int odd_even;
  printf("Enter a Number : ");
  scanf("%d", &odd_even);
  printf("%d", odd_even % 2 == 0);
}