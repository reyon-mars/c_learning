#include<stdio.h>

int main(void){
  FILE *pF=fopen("hello.txt","r");
 
  char BUFFER[255];
  fgets(BUFFER,255,pF);

  printf("%s",BUFFER);

  fclose(pF);

  return 0;
}
