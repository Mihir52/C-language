// Q.Print "hello world" 5 times || using recursion
#include <stdio.h>

void printHW(int count);  

int main()
{
  printHW(5);
}
// recursive function
void printHW(int count)
{
  if (count == 0)
  {
    return;
  }

  printf("hello world\n");
  printHW(count - 1);
}