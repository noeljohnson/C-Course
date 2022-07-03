//GTG

// To show the use of if - else and ternary operator

#include<stdio.h>

int main(void){

  int grade;
  printf("%s ","Enter grade");
  scanf("%d", &grade);

  if (grade >= 60){
    puts("Passed");
  }
  else{
    puts("Failed");
  }

  puts((grade >= 60 ? "Passed" : "Failed"));
}

//TYJC
