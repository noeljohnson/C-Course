//GTG

//using seed to produce truly random sequences

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){

  srand(time(NULL));

  for (int i = 0; i < 10; i++){
    printf("%d ", rand() % 6 + 1);
  }
  puts("");

  return(0);
}

//TYJC
