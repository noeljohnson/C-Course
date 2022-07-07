//GTG

//To find the largest 2 numbers of ten numbers

#include<stdio.h>

int main(void){

  int num, l1, l2, count = 1;

  printf("%s ", "Enter number");
  scanf("%d", &num);
  l1 = num;

  while (count < 10){
    printf("%s ", "Enter number");
    scanf("%d", &num);
    if (l1 < num){
      l2 = l1;
      l1 = num;
    }
    else if (count  == 1){
      l2 = num;
    }
    else if (l2 < num){
      l2 = num;
    }
    count++;
  }

  printf("The largest two numbers are %d and %d\n", l2, l1);
}

//TYJC
