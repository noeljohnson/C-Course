//GTG

//Get the average of 10 students in a class

#include<stdio.h>

int main(void){

  int grade = 0,  total = 0, count = 0;


  while (count < 10){
    printf("%s ", "Enter grade");
    scanf("%d", &grade);
    total = total + grade;
    count = count + 1;
  }

  int average = total / 10;
  printf("The class average is %d\n", average);
}

//TYJC
