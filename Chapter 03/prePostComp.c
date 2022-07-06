//GTG

// A program to show the diffrence between preincreamenting and postincreamenting

#include<stdio.h>

int main(void){

  int c = 5;
  printf("c's value : %d\n", c);
  printf("c's value when computed as expression : %d\n", c++); //post increament
  printf("c's value afterwards : %d\n", c);
  
  c = 5;
  printf("c's value : %d\n", c);
  printf("c's value when computed as expression : %d\n", ++c); //pre increament
  printf("c's value afterwards : %d\n", c);
  
}

//TYJC
