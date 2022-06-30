//GTG

//To get some statistics of three numbers

#include <stdio.h>

int main(void){

  int a, b, c, maxNum, minNum;
  printf("Enter the three numbers ");
  scanf("%d %d %d", &a, &b, &c);

  maxNum = minNum = a;

  if (b > maxNum){
    maxNum = b;
  }

  if (c > maxNum){
    maxNum = c;
  }

  if (b < minNum){
    minNum = b;
  }

  if (c < minNum){
    minNum = c;
  }

  printf("Sum : %d\n", a + b + c);
  printf("Average : %d\n", (a + b + c) / 3);
  printf("Product : %d\n", a * b * c);
  printf("Smallest : %d\n", minNum);
  printf("Largest : %d\n", maxNum);
}

//TYJC
