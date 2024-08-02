#include<stdio.h>
#include<stdlib.h>
int*  
int*  bubble_sort ( int array[] , int arraylen );
int*  selection_sort ( int array[], size_t arraylen );
int*  insertion_sort( int array[] , size_t arraylen);


int main ( void ){

  int array[]= { 1, 9, 2, 8, 3, 7, 4, 6, 5, 0};
  int arraylen = sizeof( array ) / sizeof( int );

  insertion_sort( array , arraylen );
  
  for( int i = 0; i < arraylen; i++) { 
    printf (" %d ", array[ i ] );
  }
  
 return 0;
}

int* bubble_sort( int array[] , int arraylen ){

  for(int i = 0; i < arraylen-1; i++){
  
    for(int j = 0; j < ( arraylen-i ) -1; j++){

      if( array[j] > array[j+1] ){
        int temp = array[i];
        array[i] = array[i+1];
        array[i+1]= temp;
      }
    }
  }
  return array;
}

int*  selection_sort ( int array[], size_t arraylen){

  size_t index_of_smallest;

  for( size_t i = 0; i < arraylen-1; i++) {

    index_of_smallest = i; 

    for( size_t j = i; j < arraylen; j++) {
      if( array[ j ] < array[  index_of_smallest ]){
        index_of_smallest = j;
      }
    }
    int temp = array[index_of_smallest];
    array[ index_of_smallest ] = array[ i ];
    array[ i ] = temp; 
  }
  return array;
}


int*  insertion_sort( int array[] , size_t arraylen){

  for( size_t i = 1; i < arraylen; i++) {
    
    int extract_position = i;
    int value = array[ extract_position ];
    int current_index = i;

    while( current_index != 0 && array[ current_index - 1 ] > value) {
      array[ current_index] = array[ current_index-1 ];
      current_index--;
    }
    array[ current_index ] = value;
  }
  return array;
}