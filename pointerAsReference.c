

#include<stdio.h>

void  test(int * a, int * b)
{
  printf("%d, %d\n", *a, *b);
  printf("%d\n",&*a);
}


int main()
{
  int c = 10;
  int d = 10;
  printf("%d,%d\n",&c ,&d);
  test( &c, &d );
  return 0;

}
