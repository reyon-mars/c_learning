#include<stdio.h>

int main(void)
{
  FILE* fp=NULL;
  char name[1024];
  float length;
  int mass;
  
  fp= fopen("whales.txt","r");
  while (fscanf(fp, "%s %f %d",name, &length, &mass)!=EOF) {
    printf("%s whale, %.1f mtrs, %d tonnes\n",name, length, mass);
  }
  fclose(fp);
}
