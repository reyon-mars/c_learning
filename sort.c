#include<stdio.h>
void sort(int array[],int arraylen);

int main(void)
{
  int array[]= {9,8,7,6,4,5,3,2,1};
  int arraylen = sizeof(array)/sizeof(array[0]);

  sort(array,arraylen);
  for(int i = 0; i<arraylen; i++) { 
    printf("%d\n",array[i]);
  }
  
 return 0;
}

void sort(int array[],int arraylen){

  for(int i=0; i < arraylen-1; i++){
  
    for(int j=0; j < (arraylen-i)-1;j++){

      if(array[j]>array[j+1]){
      
        
        int temp = array[i];
        array[i] = array[i+1];
        array[i+1]= temp;
      }
    }
  }
}
