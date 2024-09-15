#include <stdio.h>

int main()
{
  int aadhar[5];
  int *ptr = &aadhar[0];

  // input
  for (int i = 0; i < 5; i++)
  {
    printf("%d index : ", i);
    // Using pointer
    // scanf("%d", (ptr + i));

    // simpleway
    scanf("%d", &aadhar[i]);
  }
  printf("---------------\n");
  // output
  for (int i = 0; i < 5; i++)
  {
    // Using pointer
    // printf("%d index = %d\n", i, *(ptr + i));

    // simpleway
    printf("%d index = %d\n", i, aadhar[i]);
  }
}