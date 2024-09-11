// Write a program to print prime numbers in a range.
#include <stdio.h>
int main(){
  int n,i;
  for (n = 11; n < 100; n++)
  {
    for (i = 2; i < n; i++)
    {
      if (n%i == 0)
      {
        // printf("Not prime");
        break;
      }
    }
    if (i == n)
    {
      printf("%d ", n);
    }
    
  }
  
}