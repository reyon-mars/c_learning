#include<stdio.h>

void printMultiDimensionalArray(int a[3][3]){
  for (int row=0; row<3; row++) {
    for (int col=0; col<3; col++) {
      printf("%d\t",a[row][col]);
    }
    printf("\n");
  }
}
int main(void){
  int matrix[3][3]={
     {1,0,0}
    ,{0,1,0}
    ,{0,0,1}
  };
  printMultiDimensionalArray(matrix);
  return 0;
}
