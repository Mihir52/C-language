// Write a program to calculate area of a square.
// formula : side * side

#include <stdio.h>
int main(){
  int square;
  printf("enter area : ");
  scanf("%d",&square);

  int _value= square * square;
  printf("area is %d",_value); 
}