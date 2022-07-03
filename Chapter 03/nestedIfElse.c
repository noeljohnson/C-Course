//GTG

// A program to show nested if and contains some block level code

#include<stdio.h>
int main(void){

  int grade;

  printf("%s ", "Enter grade");
  scanf("%d", &grade);

  if (grade >= 90){
    puts("You have gotten A grade");
  }
  else if (grade >= 80){ // nested if
    puts("You have gotten B grade");
  }
  else if(grade >= 70){
    puts("You have gotten C grade");
  }
  else if(grade >= 60){
    puts("You have gotten D grade");
  }
  else{ // braces are necessary for this clause
    puts("You have failed");
    puts("Please retake the course");
  }

}

//TYJC
