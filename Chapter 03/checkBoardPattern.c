//GTG

// to print a checker board pattern

#include<stdio.h>

int main(void){

  int i = 8;
  int countOuter = 0, countInner;
  while (countOuter < i){
    if (countOuter % 2){
      printf("%s", " ");
    }

    countInner = 0;
    while (countInner < i){
      printf("%s ", "*");
      countInner++;
    }

    puts("");
    countOuter++;
  }

}
//TYJC
