// Write a function to reverse an array.

#include <stdio.h>

int reverseArr(int arr[], int n);
int printArr(int arr[], int n);

int main()
{
  int arr[] = {1,2,3,4,5};
  reverseArr(arr, 5);
  printArr(arr, 5);
}

int reverseArr(int arr[], int n)
{
  for (int i = 0; i < n / 2; i++)
  {
    int firstVal = arr[i];
    int seccondVal = arr[n - i - 1];
    arr[i] = seccondVal;
    arr[n - i - 1] = firstVal;
  }
}

int printArr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d\t", arr[i]);
  }
}