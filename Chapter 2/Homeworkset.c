// 1.Write a program to print the average of 3 numbers.
// 2.Write a program to check if given character is digit or not.
// 3.Write a program to print the smallest number

#include <stdio.h>
int main()
{
  /*
  int a;
  printf("Enter a number : ");
  scanf("%d", &a);
  printf("%d", a > 99 && a < 1000);
  return 0;
  */

  
    char a;
    printf("Enter a character : ");
    scanf("%c", &a);
    if (a >= '0' && a <= '9')
    {
      printf("%c is a digit \n");
    }
    else
    {
      printf("%c not a digit.\n");
    }
    


/*
  int num1, num2, num3;
  printf("enter three times of numbers : ");
  scanf("%d %d %d", &num1, &num2, &num3);

  if (num1 <= num2 && num1 <= num3)
  {
    printf("Smallest number is: %d\n", num1);
  }
  else if (num2 <= num1 && num2 <= num3)
  {
    printf("Smallest number is: %d\n", num2);
  }
  else
  {
    printf("Smallest number is: %d\n", num3);
  }
*/
  return 0;
}
