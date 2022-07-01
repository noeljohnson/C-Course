//GTG

// A program to print the sorted output of integers

#include<stdio.h>

int main(void){

  int a, b, c;
  int a1, a2, a3;

  printf("%s ", "Enter the three integers");
  scanf("%d %d %d", &a, &b, &c);

  a3 = a1 = a;
  a2 = a + b + c;

  printf("The integers in ascending order is\n");

  if (a1 > b){
    a1 = b;
  }
  if (a1 > c){
    a1 = c;
  }

  if (a3 < b){
    a3 = b;
  }

  if (a3 < c){
    a3 = c;
  }

  a2 = a2 - a1 - a3;

  printf("In sorted order : %d, %d, %d\n", a1, a2, a3);
}

//TYJC
