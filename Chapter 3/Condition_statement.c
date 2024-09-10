#include <stdio.h>

int main()
{
  int age;
  printf("Enter your age : ");
  scanf("%d", &age);

  if (age > 18)
  {
    printf("Adult");
    printf("you can drive");
  }
  else
  {
    printf("not adult");
  }

  // Ternary
  // Condition ? doSomething if true : doSomething if false
  age >= 18 ? printf("Adult \n") : printf("not adult \n");

  return 0;
}