// Write a program to calculate perimeter of rectangle.Take sides, a & b, from the user.
#include <stdio.h>
int main()
{
  int _length, _width;
  printf("enter length : ");
  scanf("%d", &_length);

  printf("enter width : ");
  scanf("%d", &_width);

  int rectangle = _length * _width;
  printf("calculate : %d", rectangle);


  // int _length;
  // printf("enter length");
  // scanf("%d", &_length);

  // int _width;
  // printf("enter width");
  // scanf("%d", &_width);

  // int rectangle = _length * _width;
  // printf("Perimeter of rectangle %d",rectangle);
}