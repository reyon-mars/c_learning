#include<stdio.h>
#include<stdlib.h>
void* mymemcpy(void *destination, void *source, int bytecount){

  char *d=destination;
  char *s=source;
  
  while(bytecount--){
    *d++ = *s++;
  }
  return destination;
}

int main(void){

  char name[] ="roni rana magar";
  char * copy = malloc(sizeof(name));
  mymemcpy(copy,name,sizeof(name));    
  printf("%s,  %s",name, copy);

  return 0;
}
