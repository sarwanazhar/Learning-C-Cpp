#include <stdio.h>

int main() {
  int n;
  printf("Enter the table you want: ");
  scanf("%d", &n);

  int arr[10];

  // store the table in array
  for(int i = 0; i < 10; i++){
    arr[i] = n * (i+1);
  }
  // print the array
  for(int i = 0; i<10; i++){
    printf("%d x %d = %d \n", n, i+1, arr[i]);
  }

  return 0;
}