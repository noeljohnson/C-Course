//GTG

// A program to calculate the growth of intrest over time

#include<stdio.h>
#include<math.h>

int main(void){

  double principal = 1000.0, rate = 0.05;

  printf("%4s%21s\n", "Year", "Current Value");

  for (int year = 1; year <= 10; year++){
    printf("%4d%21.2f\n", year, principal * pow((1 + rate), year));
  }
}

//TYJC
