// Write functions to calculate area of a square, a circle & a rectangle.
#include <stdio.h>

float squareArea(float side);
float circleArea(float radius);
float rectangleArea(float a, float b);
int main()
{
  float a = 5.0;
  float b = 10.0;

  printf("area is : %f", rectangleArea(a, b));
  return 0;
}

float squareArea(float side)
{
  return side * side;
}
float circleArea(float radius)
{
  return 3.14 * radius * radius;
}
float rectangleArea(float a, float b)
{
  return a * b;
}


/*
#include <stdio.h>

int SquareArea(int side);
float CircleArea(float C_area);
int RectangleArea(int length,int width);

int main()
{
  int side;
  printf("enter a square side : ");
  scanf("%d", &side);
  int cal = SquareArea(side);
  printf("%d\n", cal);

  float C_area;
  printf("enter a Circle Radius : ");
  scanf("%f", &C_area);
  float CircleCal = CircleArea(C_area);
  printf("%f\n",CircleCal);

  int length,width;
  printf("enter a length : ");
  scanf("%d",&length);
  printf("enter a width : ");
  scanf("%d",&width);

  int RecCal = RectangleArea(length , width);
  printf("%d",RecCal);


}

int SquareArea(int side)
{
  return side * side;
}
float CircleArea(float C_area)
{
  return 3.14 * C_area * C_area;
}
int RectangleArea(int length,int width ){
  return length * width;
}
*/