#include<stdio.h>

int main(void){

  FILE* fptr=NULL;
  char s[1024];
  int linecount=0;

  fptr=fopen("quote.txt","r");
  while (fgets(s,sizeof(s), fptr) != NULL) {

  printf("%d: %s",++linecount,s);

  }
  fclose(fptr);
  return 0;  
}
