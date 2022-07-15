//GTG

// A program to find the approx value of pi

#include<stdio.h>

int main(void){
  int sign = 1,  numTerms = 0;
  double pi = 3.1415926, approxPi = 0, error = 1e-1, diff;
  while (1){
    approxPi += sign * 4.0 / (numTerms * 2 + 1);

    numTerms++;
    sign *= -1;
    diff = approxPi - pi;

    if (diff < 0){
      diff *= -1;
    }
    if (diff < error){
      printf("Pi(computed) : %f, error : %f, #Terms : %d\n", approxPi, diff, numTerms);
      error *= 1e-1;
    }
    if (error < 1e-5){
      break;
    }

  }
}

//TYJC
