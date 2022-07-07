//GTG

// A program to print the wages earned by an employees, processing one at a time

#include<stdio.h>

int main(void){

  int sales = 0;

  while (sales != -1){
    printf("%s ", "Enter sales (-1 to quit)");
    scanf("%d", &sales);
    if (sales > 0){
      printf("Salary is : %.2f\n", 200.0 + 0.09 * sales);
    }
  }
  
}

//TYJC
