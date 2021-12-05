#include "stdio.h"
#include "stdlib.h"

int main(){
  int arr1[2][3],arr2[2][3],array[2][3],i,j;

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      printf("Array 1 , position %d , %d:",i+1,j+1);
      scanf("%d",&arr1[i][j]);

      printf("Array 2 , position %d , %d :",i+1,j+1);
      scanf("%d",&arr2[i][j]);

      array[i][j] = arr1[i][j] + arr2[i][j];
    }
  }

  system("@cls||clear");
  printf("\nArray1:");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      printf("\n%d",arr1[i][j]);
    }
  }
  printf("\n");
  printf("\nArray2: ");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {

      printf("\n%d",arr2[i][j]);

    }
  }
  printf("\n");
  printf("\nArray1 + Array2:");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      printf("\n %d",array[i][j]);
    }
  }

  printf("\n");
  system("PAUSE");
  return 0;
}
