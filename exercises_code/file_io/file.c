#include<stdio.h>
int main(void){
  
  FILE *pF = fopen("test.txt", "w");
  fprintf(pF ,"Roni Rana Magar");
  fclose(pF);

  return 0;
}
