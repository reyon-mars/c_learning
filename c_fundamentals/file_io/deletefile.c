#include <stdio.h>
int main(void)
{
  if (remove("test.txt") == 0)
  {
    printf("The file has been deleted");
  }
  else
    printf("The file was not found");

  return 0;
}
