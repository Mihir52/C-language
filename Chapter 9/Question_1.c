// Make a program to read 5 integers form a file.

#include <stdio.h>

int main(){
  FILE *fptr;
  fptr = fopen("Test.txt","r");

  int n;
  fscanf(fptr,"%d",&n);
  printf("number = %d\n",n);
  fscanf(fptr,"%d",&n);
  printf("number = %d\n",n);
  fscanf(fptr,"%d",&n);
  printf("number = %d\n",n);
  fscanf(fptr,"%d",&n);
  printf("number = %d\n",n);
  fscanf(fptr,"%d",&n);
  printf("number = %d\n",n);
}