#include <stdio.h>

void increment(int *a);

int main(void)
{
  int param = 2;

  increment(&param );
  printf("%d\n", param );

  return 0;
}
void increment(int *a)
{
  *a += 1;
}
