#include <stdio.h>

int main()
{
  int x;
  printf("enter number if check armstrong number or not : ");
  scanf("%d", &x);

  int a,b,c,y,d;
  a = x % 10;
  y = x / 10;
  b = y % 10;
  c = y / 10;

  d = (a*a*a) + (b*b*b) + (c*c*c);

  if (d == x)
  {
    printf("armstrong number");
  }
  else{
    printf("not armstrong number");
  }
  

}