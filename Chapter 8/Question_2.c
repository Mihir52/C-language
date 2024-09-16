// Q.1:Ask the user to enter their firstname & print it back to them.
// Q.2:Also try this with their fullname.

#include <stdio.h>

int main()
{
  // char firstname[20];
  // printf("enter your firstname :");
  // scanf("%s",firstname);
  // printf("your firstname is %s",firstname);

  char fullname[100];
  printf("enter your fullname : ");
  fgets(fullname, 100, stdin); // input
  // gets(fullname);           //input-not use,its dangerous

  puts(fullname); // output
}
