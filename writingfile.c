#include<stdio.h>


int main(void)
{
  FILE* fp=NULL;
  fp=fopen("output.txt","w");
  char name[]="oni rana";

  fputc('R',fp);
  fputc('\n',fp);
  fprintf(fp,"%s\n",name);
  fputs("Oh shoot it is Roni Rana Magar !", fp);

  fclose(fp);
  return 0;
}
