// Are the following valid or not?
// a. int a = 8^8       ---------> Valid statement
// b. int x; int y = x;  -----------> valid statement
// c. int x,y = x;        -------->invalid
// char stars = '**';   ------->invalid

#include <stdio.h>
#include<math.h>
int main()
{
  // int a = 8 ^ 5;
  // printf("%d", a);

  // int x;
  // int y = x;

  // char stars = '**';

  int a, b;
  a = 8;
  b = 5;
  int power = pow(a, b);
  printf("%d", power);
}