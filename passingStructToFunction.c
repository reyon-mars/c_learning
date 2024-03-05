#include<stdio.h>

struct roni {
  int age;
  char * name;
  char * about;
};

void set_age(struct roni * her ,int age, char * name);

int main(void){
  struct roni her={
    .about="she is very beautiful.",
  };
  set_age(&her, 19,"roni rana magar");
  printf("her name is %s \n& her age is %d\n",her.name,her.age);
  
  return 0;

}

void set_age(struct roni * f ,int age,char * name){
  (*f).age= age;
  f->name = name;
}


