/*
Search on what a "nested loop" is & print this pattern using it.
* * * * *
* * * * *
* * * * *
* * * * *
*/

#include <stdio.h>

int main()
{
  int rows = 4;
  int cols = 5;

  // Outer loop for rows
  for (int i = 0; i < rows; i++)
  {
    // Inner loop for columns
    for (int j = 0; j < cols; j++)
    {
      printf("* ");
    }
    printf("\n");
  }

  return 0;
}
