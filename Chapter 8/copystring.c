#include <stdio.h>
#include <string.h>

int main()
{

  // Copy string
  /*
  char oldstr[] = "oldstr";
  char newstr[] = "newstr";

  strcpy(newstr,oldstr);
  puts(newstr);
  */

  // concatenates string
  /*
  char firststr[100] = "hello ";
  char secstr[] = "World";
  strcat(firststr,secstr);
  puts(firststr);
  */

  // Compares 2 string
  char firstStr[] = "HHH";
  char SecStr[] = "HHH";
  printf("%d", strcmp(firstStr, SecStr));
}