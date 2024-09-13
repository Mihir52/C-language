#include <stdio.h>

void printTable(int n); // 'n'different name bhi de sakte hai and same name bhi

int main()
{
  int n;
  printf("enter a number : ");
  scanf("%d", &n);

  printTable(n);

}
void printTable(int n)
{
  for (int i = 1; i <= 10; i++)
  {
    printf("%d\n", n * i);
  }
}