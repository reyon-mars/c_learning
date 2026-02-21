#include<stdio.h>

void times2(int * a, int len);
void times3(int a[], int len);
void times4(int a[5], int len);

int main(void){
 
  int array[5]={1,2,3,4,5};
  int len = sizeof(array)/sizeof(array[0]);

  times2(array,len);
  times3(&array[0],len);
  times4(array,len);
  for(int i=0; i<len; i++){
    printf("%d\t",array[i]);
  }

  return 0;
}
void times2(int * a, int len){
  for (int i=0; i<len; i++) {
    printf("%d\t",a[i]*2);
  }
  printf("\n");
}
void times3(int a[],int len){
  for (int i=0; i<len; i++) {
    printf("%d\t",a[i]*3);
  }
  printf("\n");
}
void times4(int a[5], int len){
  for (int i=0; i<len; i++){
    printf("%d\t",a[i]*4);
  }
  printf("\n");
}
