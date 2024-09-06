// Write a program to calculate area of a circle.
// Formula : pi*r^2

#include <stdio.h>
int main()
{
  float radius;
  printf("enter area : ");
  scanf("%f", &radius);

  float sum = 3.14 * radius * radius;
  printf("area of circle %f",sum);
}
