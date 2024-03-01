#include<stdio.h>
int searchMinVersion1(int array[],int sizeArray);

int main(void){

  int array[]={999,984,235,654,65,34,6643,235,4325,643,754,234,532423,532};
  int sizeArray = sizeof(array)/sizeof(array[0]);

  printf(" The smallest number in the  array is %d .",searchMinVersion1(array,sizeArray));
 
  return 0;
}

int searchMinVersion1(int array[],int sizeArray){
  int min = array[0];
  for (int i =0; i<sizeArray; i++) {
    if(array[i] < min){
      min = array[i];
    }
  }
  return min;
}
