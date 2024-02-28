#include<stdio.h>

typedef int byte[8];

typedef char name[50];

typedef struct{
  char name[50];
  char password[100];
  int age;
} user;

int main(void)
{
  
  

  byte byte1 ={0,1,0,1,0,1,0};
  for (int i=0; i < sizeof(byte1)/sizeof(byte1[0]);i++) {
    printf("%d\t",byte1[i]);
  }
  return 0;
}
