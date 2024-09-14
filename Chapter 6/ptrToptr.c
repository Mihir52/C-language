#include <stdio.h>

int main()
{
  float price = 100.00;
  float *ptr_price = &price;
  float **pptr = &ptr_price;

  printf("%f\n", price);
  printf("%f\n", &price);
  printf("%f\n", &ptr_price);

  return 0;
}