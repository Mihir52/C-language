// Write a function to find square root of a number.

#include <stdio.h>
#include <math.h>

// Using function

int squarRoot(int n);

int main()
{
  int n;
  printf("enter a number to find square root : ");
  scanf("%d", &n);

  printf("Square root of %d is : %d",n,squarRoot(n));
}

int squarRoot(int n)
{
  int result;
  result = sqrt(n);
  return result;
}

/*
int main(){
  int n,result;
  printf("enter a number to find square root : ");
  scanf("%d",&n);

  result = sqrt(n);
  printf("Square root of %d is : %d",n,result);

}
*/