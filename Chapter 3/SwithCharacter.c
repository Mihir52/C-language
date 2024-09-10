#include <stdio.h>

int main()
{
  char day;
  printf("Enter a day : ");
  scanf("%c", &day);
  // scanf("%s", &day);

  switch (day)
  {
  case 'm':
    printf("monday");
    break;
  case 't':
    printf("Tuesday");
    break;
  case 'w':
    printf("wednesday");
    break;
  case 'T':
    printf("Thursday");
    break;
  case 'f':
    printf("Friday");
    break;
  case 's':
    printf("saturday");
    break;
  case 'S':
    printf("Sunday");
    break;
  default:
    printf("not a valid day");
  }
}