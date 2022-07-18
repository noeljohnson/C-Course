//GTG

// a program to find the maximum of three numbers using functions

#include<stdio.h>

int maxim3(int x, int y, int z);

int main(void){

  int num1, num2, num3;

  printf("%s ", "Enter three numbers");
  scanf("%d %d %d", &num1, &num2, &num3);

  printf("The max of (%d, %d, %d) is %d\n", num1, num2, num3, maxim3(num1, num2, num3));

  return(0);
}

int maxim3(int x, int y, int z){
  int max = (x > y ? (x > z ? x : z) : (y > z ? y : z));
  return(max); 
}

//TYJC
