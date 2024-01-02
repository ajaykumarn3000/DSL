#include <stdio.h>

void insertionSort(int arr[], int n) {
  int key, j;
  for (int i = 1; i<n; i++) {
    key = arr[i];
    j = i-1;

    while ( j>=0 && arr[j]>key ){
      arr[j+1] = arr[j];
      j=j-1;
    }
    arr[j+1] = key;
  }
}

int main(){
  int len;
  printf("Enter the length of array: ");
  scanf("%d", &len);

  int A[len];
  printf("Enter elements in array:\n");
  for (int i=0; i<len; i++) {
    scanf("%d", &A[i]);
  }

  insertionSort(A, len);
  
  for (int i=0; i<len; i++) {
    printf("%d ", A[i]);
  }

  return 0;
}