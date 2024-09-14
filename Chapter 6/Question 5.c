// Write a function to calculate the sum,product & average of 2 numbers.Print that average in the main function.

#include <stdio.h>

void doWork(int a, int b, int *sum, int *product, int *avg);

int main()
{
  int a = 3, b = 5;
  int sum, product, avg;
  doWork(a, b, &sum, &product, &avg);
  printf("sum = %d, product = %d ,avg = %d", sum, product, avg);

  return 0;
}

void doWork(int a, int b, int *sum, int *product, int *avg)
{
  *sum = a + b;
  *product = a * b;
  *avg = (a + b) / 2;
}