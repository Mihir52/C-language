// Make a program to input student information from a user & enter it to a file.

#include <stdio.h>

int main(){
  FILE *fptr;
  fptr = fopen("Student.txt","w");

  char name[100];
  int age;
  float cgpa;

  printf("enter name : ");
  scanf("%s",&name);
  printf("enter age : ");
  scanf("%d",&age);
  printf("enter cgpa : ");
  scanf("%f",&cgpa);

  fprintf(fptr,"name : %s\n",name);
  fprintf(fptr,"age : %d\n",age);
  fprintf(fptr,"cgpa : %f",cgpa);

}