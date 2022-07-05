//GTG

// To find the class average for unknown number of students using sentinel approach

#include<stdio.h>

int main(void){

  int total = 0, counter = 0, grade = 0;

  printf("%s ", "Enter grade or -1 to quit");
  scanf("%d", &grade);

  while(grade > 0){
    total = total + grade;
    counter = counter + 1;
    printf("%s ", "Enter grade or -1 to quit");
    scanf("%d", &grade);
  }

  if (counter == 0){
    puts("No grades where entered");
  }
  else{
    double avg = (double) total / counter;
    printf("The class average is %.2f\n", avg);
  }

}

//TYJC
