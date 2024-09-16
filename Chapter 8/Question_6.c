// Write a function named slice,which takes a string & returns a sliced string from index n to m.

#include <stdio.h>

void slicefun(char str[], int n, int m);

int main()
{
  char str[] = "HelloWorld";
  slicefun(str, 3, 6);
}

void slicefun(char str[], int n, int m)
{
  char newstr[100];
  int j = 0;
  for (int i = n; i <= m; i++, j++)
  {
    newstr[j] = str[i];
  }
  newstr[j] = '\0';
  puts(newstr);
}