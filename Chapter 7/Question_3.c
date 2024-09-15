/*
int arr[] = {1,2,3,4,5}
For the given array,what will the following give?
a :  *(arr+2)  -> 3
b :  *(arr+5)  -> error : not exist in array
*/

#include <stdio.h>

int oddnum(int arr[],int n);

int main(){

    int arr[] = {1,2,3,4,5};
    printf("%d\n",*(arr+2));
    printf("%d\n",*(arr+5));
    
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