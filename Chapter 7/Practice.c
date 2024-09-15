#include <stdio.h>

int main()
{
  int item[3];

  printf("enter item1 : ");
  scanf("%d", &item[0]);
  printf("enter item2 : ");
  scanf("%d", &item[1]);
  printf("enter item3 : ");
  scanf("%d", &item[2]);

  int cost = item[0] + item[1] + item[2];
  printf("cost is : %d",cost);

  float gst = item[0]*0.18 + item[1]*0.18 + item[2]*0.18;
  printf("\nWith gst : %.2f",gst);

  printf("\nTotal bill is : %.2f",cost+gst);
}