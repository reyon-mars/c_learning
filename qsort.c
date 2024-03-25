#include<stdio.h>
#include<stdlib.h>

struct animal {
  char name[50];
  int leg_count;
};

int compar(const void * elem1, const void * elem2){
  
  const struct animal *instance1 = elem1;
  const struct animal *instance2 = elem2;
  
  if(instance1->leg_count > instance2->leg_count)
    return 1;
  if(instance1->leg_count > instance2->leg_count)
    return -1;
  
  return 0;
}


int main(void){

  struct animal a[4]={
    {.name="cat", .leg_count=4},
    {.name="chicken", .leg_count=2},
    {.name="snake", .leg_count=0},
    {.name="millipede", .leg_count=100}
  };
  
  qsort(a,4,sizeof(struct animal),compar);
  for (int i=0; i<4; i++) {
    printf("%s : %d\n",a[i].name, a[i].leg_count);
  }
 return 0;
}
