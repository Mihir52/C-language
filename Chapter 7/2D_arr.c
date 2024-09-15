#include <stdio.h>

int main()
{
  // 2 = student
  // 3 = subject

  int marks[2][3];

  marks[0][0] = 80;
  marks[0][1] = 85;
  marks[0][2] = 90;

  marks[1][0] = 50;
  marks[1][1] = 60;
  marks[1][2] = 70;

  printf("%d",marks[0][2]);

}