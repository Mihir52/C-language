// Write a function to find sum of digits of a numbers
#include <stdio.h>

// without function
int main() {
    int n, r, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Handle negative numbers
    // n = (n < 0) ? -n : n;

    while (n > 0) {
        r = n % 10;
        sum += r;
        n /= 10;
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}



// With function
/*
int sumOfdigits(int n);

int main()
{
  int n;
  printf("enter a number : ");
  scanf("%d", &n);

  int result = sumOfdigits(n);
  printf("sum of digits : %d\n", result);
}

int sumOfdigits(int n)
{
  int sum = 0;
  while (n > 0)
  {
    int ModValue = n % 10;
    sum = sum + ModValue;
    n = n / 10;
  }
  // printf("Sum of digits : %d", sum);
  return sum;
}
*/
