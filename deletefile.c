#include<stdio.h>
int main(void)
{
  if(remove("test.txt")==0){
    
    printf("the file has been deleted");

  }
  else 
    printf("the file was not found");

  return 0;
}
