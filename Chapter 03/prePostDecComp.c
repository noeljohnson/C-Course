//GTG

// A program to compare predecreamenting and post-decreamenting

#include<stdio.h>

int main(void){

  int c = 5;

  puts("PreDecreamenting");
  printf("c : %d\n", c);
  printf("c using expression : %d\n", --c);
  printf("c after expression : %d\n", c);

  c = 5;
  puts("PostDecreamenting");
  printf("c : %d\n", c);
  printf("c using expression : %d\n", c--);
  printf("c after expression : %d\n", c);

}

//TYJC
