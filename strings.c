#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main (void)
{
  char * string="Hello,";
  char string1[]="roni";
  char  string2[4]="rana";
  printf("%s\t",string);

  for (int i=0 ; i<=strlen(string1);i++)
  {
  printf("%c",toupper(string1[i]));
  }

  printf("\t");

  for (int i=0 ; i<=strlen(string2);i++){

  printf("%c",toupper(string2[i]));
  }
  return 0;
}
