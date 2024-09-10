#include <stdio.h>

int main()
{
  int day;
  printf("Enter day(1-7) : ");
  scanf("%d", &day);

     (day)
  {
  case 1:
    printf("monday");
    break;
  case 2:
    printf("tuesday");
    break;
  case 3:
    printf("wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("saturday");
    break;
  case 7:
    printf("sunday");
    break;
  default:
    printf("not a valid day");
  }
}