// Write a program to check if a given number is Armstrong number or not.
/*
153 = (1*1*1)+(5*5*5)+(3*3*3)
where:
(1*1*1)=1
(5*5*5)=125
(3*3*3)=27
So:
1+125+27=153   -----> 153 is an Armstrong number.
*/

// Only work on 3-digit number
#include <stdio.h>
int main(){
  int a,b,c,x,y,d;
  printf("Enter a number : ");
  scanf("%d",&x);

  a=x%10;
  y=x/10;
  b=y%10;
  c=y/10;

  d=(a*a*a) + (b*b*b) + (c*c*c);
  if(d==x){ 
    printf("It is Armstrong");
  }
  else{
    printf("Not Armstrong");
  }

  return 0;

}