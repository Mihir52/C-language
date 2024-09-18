#include <stdio.h>

int main()
{
  FILE *fptr;
  fptr = fopen("Test.txt", "r");

  // char ch;
  // fscanf(fptr,"%c",&ch);
  // printf("Character : %c\n",ch);
  // fscanf(fptr,"%c",&ch);
  // printf("Character : %c\n",ch);
  // fscanf(fptr,"%c",&ch);
  // printf("Character : %c\n",ch);
  // fscanf(fptr,"%c",&ch);
  // printf("Character : %c\n",ch);


  // printf("%c\n",fgetc(fptr));
  // printf("%c\n",fgetc(fptr));
  // printf("%c\n",fgetc(fptr));
  // printf("%c\n",fgetc(fptr));
  // printf("%c\n",fgetc(fptr));


  // Whole file read
  char ch;
  // ch = fgetc(fptr);
  while (ch != EOF)
  {
    printf("%c",ch);
    ch = fgetc(fptr);
  }

  
}