//GTG

// A program to calculate the growth of intrest over time using only itns

#include<stdio.h>
#include<math.h>

int main(void){

  int principal = 1000, ratePerc = 5;
  int resInPennies = principal * 100;

  printf("%4s%21s\n", "Year", "Current Value");

  for (int year = 1; year <= 10; year++){
    resInPennies = resInPennies * (100 + ratePerc) / 100;
    printf("%4d%18d.%2d\n", year, resInPennies / 100, resInPennies % 100);
  }
}

//TYJC
