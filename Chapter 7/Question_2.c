// Write a function to count the number of odd numbers in an array.

#include <stdio.h>

int oddnum(int arr[],int n);

int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};
    // oddnum(arr,9);

    printf("total odd num = %d",oddnum(arr,9));
}

int oddnum(int arr[],int n){
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] % 2 != 0)
    {
      // printf("%d",arr[i]);
      count++;
    }
    
  }
  return count;
}