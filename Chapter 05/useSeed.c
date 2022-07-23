//GTG

//using seed to produce truly random sequences

#include<stdio.h>
#include<stdlib.h>

int main(void){

  int seed;
  printf("Enter seed value ");
  scanf("%d", &seed);
  srand(seed);

  for (int i = 0; i < 10; i++){
    printf("%d ", rand() % 6 + 1);
  }

  return(0);
}

//TYJC
