//GTG


//to find x ^ y

#include<stdio.h>

int main(void){

  int res = 1, count = 0, x, y;

  printf("%s ", "Enter base");
  scanf("%d", &x);
  printf("%s ", "Enter power");
  scanf("%d", &y);

  while (count < y){
    res *= x;
    count++;
  }

  printf("%d^%d = %d\n", x, y, res);
}

//TYJC
