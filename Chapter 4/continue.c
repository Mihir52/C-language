#include <stdio.h>

/*
int main(){
  for (int i = 0; i <=5; i++)
  {
    if (i == 3)
    {
      continue;
    }
    printf("%d \n",i);

  }
}
*/

// Q.Print all numbers from 1 to 10 except for 6.
/*
int main()
{
  for (int i = 1; i <= 10; i++)
  {
    if (i == 6)
    {
      continue;
    }
    printf("%d\n", i);
  }
}
*/

// Q.Print all the odd numbers from 5 to 50.
/*
int main(){
  for (int i = 5; i <= 50; i++)
  {
    if (i % 2 != 0)
    {
    printf("%d\n",i);
    }
  }

}
*/

// Q.Print the factorial of a number n.
/*
int main()
{
  int number;
  printf("enter a number : ");
  scanf("%d", &number);

  int fact = 1;
  for (int i = 1; i <= number; i++)
  {
    fact = fact * i;
  }
  printf("factorial is : %d", fact);
}
*/

// Q.Print reverse of the table for a number n.
int main()
{
  int n;
  printf("enter a number : ");
  scanf("%d", &n);

  for (int i = 10; i >= 1; i--)
  {
    printf("%d\n", n *i);
  }
}