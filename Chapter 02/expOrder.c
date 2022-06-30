//GTG

// Get the order of evalaution

#include<stdio.h>

int main(void){

  int x;
  x = 7 + 3 * 6 / 2 - 1; //-> (7 + ((3*6)/2)) - 1 = 15
  printf("X = %d\n", x);

  x = 2 % 2 + 2 * 2 - 2 / 2; //-> ((2%2)+(2*2))-(2/2) = 3
  printf("X = %d\n", x);

  x = (3 * 9 * (3 + (9 * 3 /(3)))); //-> ( 3 * 9 * (3 + (9))) -> (3 * 9 * 12) = 324
  printf("X = %d\n", x);
}

//TYJC
