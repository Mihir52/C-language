// Q.Write a function that prints Namaste if user is indian & Bonjour if the user is French.

#include <stdio.h>
void namaste();
void bonjour();

int main()
{
  printf("enter f for french & i for indian : ");
  char ch;
  scanf("%c", &ch);

  if (ch == 'i')
  {
    namaste();
  }
  else if(ch == 'f'){

    bonjour();
  }
  else
  {
    printf("only f and i enter no other keyword");
  }
}

void namaste()
{
  printf("Namaste");
}

void bonjour()
{
  printf("Bonjour");
}