#include <stdio.h>

void printHello(); // declaration/prototype(1)
void goodbye();

int main()
{
  printHello(); // function call(3) "argument"
  goodbye();
  return 0;
}

// function definition(2)
void printHello()
{
  printf("hello world\n");
}
void goodbye()
{
  printf("good bye\n");
}

// Q.Write 2 functions - one to print "Hello" & second to print "good bye".