#include <stdio.h>
/*
int main(){
  for (int i = 0; i <=10 ; i++)
  {
    if (i == 5)
    {
      break;
    }
    printf("%d\n",i);

  }
}
*/

// Q.1:Keep taking numbers as input from user until user enters an odd number.  1,3,5
/*
int main()
{
  int num;
  do
  {
    printf("Enter a num : ");
    scanf("%d", &num);
    printf("%d\n", num);

    if (num % 2 != 0)
    {
      break;
    }
  }
  while (1);
  printf("thankyou");
}
*/

// Q.2:Keep taking numbers as input from user until user enters a number which is multiple of 7.
int main()
{

  int num;

  do
  {
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("%d\n",num);
    if (num % 7 == 0)
    {
      break;
    }
  } while (1);

  printf("thank you");
}
