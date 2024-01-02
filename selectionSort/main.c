#include <stdio.h>

void main()
{
  int len;
  printf("Enter the array length: ");
  scanf("%d", &len);
  
  int A[len];

  printf("Enter the data: ");
  for(int a=0; a<len; a++){
    scanf("%d", &A[a]);
  }

  printf("Unsorted Array: ");
  for (int i = 0; i < len; i++)
  {
    printf("%d ", A[i]);
  }
  printf("\n\n");

  for (int i = 0; i < len - 1; i++)
  {
    int smallest = i;
    for (int j = i + 1; j < len; j++)
    {
      if (A[smallest] > A[j])
      {
        smallest = j;
      }

      int temp = A[smallest];
      A[smallest] = A[i];
      A[i] = temp;
    }   
  }

  printf("Final Sorted Array: ");
  for (int i = 0; i < len; i++)
  {
    printf("%d ", A[i]);
  }
}