//GTG

// to explore break and continue statements

#include<stdio.h>

int main(void){

  for (int x = 1; x <= 10; x++){
    printf("%d ", x);
    if (x == 5){ //exists the loop when x == 5
      break;
    }
  }

  puts("");

  for (int x = 1; x <= 10; x++){
    if (x % 3 == 0){ //skips all multiples of 3
      continue;
    }
    printf("%d ", x);
  }

  puts("");

}

//TYJC
