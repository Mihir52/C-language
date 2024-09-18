#include <stdio.h>

int main()
{
  FILE *fptr;
  fptr = fopen("Test.txt", "r");

  /*First meth*/
  // char cha;
  // fscanf(fptr,"%c",&cha);
  // printf("%c",cha);
  // fscanf(fptr,"%c",&cha);
  // printf("%c",cha);
  // fscanf(fptr,"%c",&cha);
  // printf("%c",cha);

  /* Second meth*/
  // printf("%c",fgetc(fptr));
  // printf("%c",fgetc(fptr));
  // printf("%c",fgetc(fptr));
  // printf("%c",fgetc(fptr));
  // printf("%c",fgetc(fptr));

  /*print whole file*/
  // while (cha != EOF)
  // {
  //   printf("%c",cha);
  //   cha = fgetc(fptr);
  // }

  /*Write*/
  // fprintf(fptr,"%c",'J');
  // fprintf(fptr,"%c",'K');
  // fprintf(fptr,"%c",'U');
  // fprintf(fptr,"%c",'U');
  // fprintf(fptr,"%c",'U');

  /*Second met*/
  // fputc('h',fptr);
  // fputc('m',fptr);

  /* Make a program to read 5 integers form a file.*/
  // int n;
  // fscanf(fptr,"%d",&n);
  // printf("%d",n);
  // fscanf(fptr,"%d",&n);
  // printf("%d",n);
  // fscanf(fptr,"%d",&n);
  // printf("%d",n);
  // fscanf(fptr,"%d",&n);
  // printf("%d",n);
  // fscanf(fptr,"%d",&n);
  // printf("%d",n);

  /*Make a program to input student information from a user & enter it to a file.*/
  // char name[100];
  // int age;
  // float cgpa;

  // printf("enter name : ");
  // scanf("%s", &name);
  // printf("enter age : ");
  // scanf("%d", &age);
  // printf("enter cgpa : ");
  // scanf("%f", &cgpa);

  // fprintf(fptr,"name : %s\n",name);
  // fprintf(fptr,"age  : %d\n",age);
  // fprintf(fptr,"cpga : %f",cgpa);

  /* Write a program to write all the odd numbers form 1 to n in a file.*/
  // int n;
  // printf("enter n : ");
  // scanf("%d",&n);

  // for (int i = 0; i <= n; i++)
  // {
  //   if (i % 2 != 0)
  //   {
  //     fprintf(fptr,"%d\n",i);
  //   }
  // }

  /*2 numbers - a & b , are written in a file.Write a program to replace them with their sum.*/
  int a;
  int b;

  fscanf(fptr,"%d",&a);
  fscanf(fptr,"%d",&b);

  fclose(fptr);

  fptr = fopen("Test.txt","w");

  fprintf(fptr,"%d",a + b);
}
