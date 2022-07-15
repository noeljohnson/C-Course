//GTG

// to write for loops that generate a given sequence

#include<stdio.h>

int main(){

  //a) 1, 2, 3, 4, 5, 6, 7 

  for (int i = 1; i <= 7; i++){
    printf("%d, ", i );
  }
  puts("");
  
  //b) 3, 8, 13, 18, 23
  
  for (int i = 3; i <= 23; i+= 5){
    printf("%d, ", i);
  }
  puts("");
   
  //c) 20, 14, 8, 2, –4, –10

  for (int i = 20; i >= -10; i-= 6){
    printf("%d, ", i);
  }
  puts("");

  //d) 19, 27, 35, 43, 51

  for(int i = 19; i <= 51; i+= 8){
    printf("%d, ", i);
  }
  puts("");
}

//TYJC
