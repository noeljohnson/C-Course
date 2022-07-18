//GTG

// a program to create functions using the square exmaple

#include<stdio.h>

int sqr(int num);

int main(void){
  for (int i = 1; i <= 10; i++){
    printf("%d ^ 2  = %d\n", i, sqr(i));
  }
}

int sqr(int num){
  return (num * num);
}

//TYJC
