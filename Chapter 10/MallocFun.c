#include <stdio.h>
#include <stdlib.h>

int main(){
  // printf("%d\n", sizeof(int));
  // printf("%d\n", sizeof(float));
  // printf("%d", sizeof(char));

  
  int *ptr;
  ptr = (int*) malloc(5*sizeof(int));

  ptr[0] = 1;
  ptr[1] = 5;
  ptr[2] = 7;
  ptr[3] = 4;
  ptr[4] = 9;

  for (int i = 0; i < 5; i++)
  {
    printf("%d\n",ptr[i]);
  }
  
}
