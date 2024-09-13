// Write a function to calculate Percentage of a student form marks in Science,Math & Sanskrit.
#include <stdio.h>

int calcPercentage(int science, int math, int sanskrit);

int main()
{
  int sc = 42;
  int math = 89;
  int sanskrit = 45;

  printf("percentage is : %d", calcPercentage(sc, math, sanskrit));
  return 0;
}

int calcPercentage(int science, int math, int sanskrit)
{
  return ((science + math + sanskrit) / 3);
}