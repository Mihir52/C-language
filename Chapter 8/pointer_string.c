#include <stdio.h>

int main(){
  // pointer threw change  
  char *canchage = "hello world";
  puts(canchage);
  canchage = "mihir";
  puts(canchage);


  // not change
  char cannotChange[] = "hello world";
  puts(cannotChange);
  // cannotChange = "Hello"; 
}