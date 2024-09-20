#include <stdio.h>
#include <stdlib.h>

int main(){
  float *ptr;
  ptr = (float*) calloc(5,sizeof(float));

  // ptr[0] = 1;
  // ptr[1] = 5;
  // ptr[2] = 7;
  // ptr[3] = 4;
  // ptr[4] = 9;

  for (int i = 0; i < 5; i++)
  {
    printf("%f\n",ptr[i]);
  }
}