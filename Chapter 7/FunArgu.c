#include <stdio.h>

void printNum(int arr[], int n);

int main()
{
  int arr[] = {1,2,3,4,5,6};
  printNum(arr,6);
}

void printNum(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d",arr[i]);
  }
}