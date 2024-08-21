#include <stdio.h>

void printArray(int arr[], int size); 
void reverseArray(int arr[], int size);

int main () {
  int arr[] = {1,2,3,4,5,6};
  int size = sizeof(arr) / sizeof(arr[0]);

  printArray(arr, size);

  reverseArray(arr, size);

  printArray(arr, size);

  return 0;
}

void printArray(int arr[], int size) {
  for(int i = 0; i < size; i++){
    printf("%d ", arr[i]);
  }
  printf("\n");
}

void reverseArray(int arr[], int size) {
  for(int i = 0; i < size/2; i++){
    int temp = arr[i];

    arr[i] = arr[size-i-1];
    arr[size-i-1] = temp;
  }
}