#include <stdio.h>

int main()
{
  FILE *fptr;

                                      /*read-file*/
  // Exist
  // fptr = fopen("Test.txe","r");

  // not-exist
  /*
  fptr = fopen("NewTest.txt", "r");
  if (fptr == NULL)
  {
    printf("file doesn't exist");
  }
  else
  {
    fclose(fptr);
  }
  */

                                      /*write-file*/

  fptr = fopen("NewTest.txt", "w");

  // fclose(fptr);
}