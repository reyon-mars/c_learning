#include<stdlib.h>
#include<stdio.h>
int main()
{
  int goals;
  printf("Entered the number of goals scored against uchiha : ");
  scanf("%d",&goals);
  if(goals<=5)
  {
    goto sos;
  }
  else{
    printf("forget soccer and start learning C");
    exit(1);
  }
  
sos:
  printf("To you i say ! kneel before god");

return 0;
}
