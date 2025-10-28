#include <stdio.h>
void doubleArray(int *a, int len)
{
  for (int i = 0; i < len; i++)
  {
    a[i] *= 2;
  }
}
int main(void)
{
  int x[5] = {1, 2, 3, 4, 5};
  int len = sizeof(x) / sizeof(x[0]);
  doubleArray(x, len);
  for (int i = 0; i < len; i++)
  {
    printf("%d\t", x[i]);
  }
  return 0;
}
