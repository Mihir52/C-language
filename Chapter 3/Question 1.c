// Write a program to check if a student passed or failed
// Marks > 30 is pass
// Marks <= 30 is fail

#include <stdio.h>

int main(){
  int marks;
  printf("enter a marks(0-100) : ");
  scanf("%d",&marks);

  if(marks >=0 && marks <= 30){
    printf("Falil");
  }
  else if(marks > 30 && marks <= 100 ){
    printf("Pass");
  }
  else{
    printf("wrong marks");
  }
}