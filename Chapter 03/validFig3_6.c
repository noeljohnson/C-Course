//GTG

// This program is to check if to give bonus to the instructor based on class performance

#include<stdio.h>

int main(void){

  int  count = 0, numPass = 0, grade;   

  while (count < 10){
    grade = -1; // not valid entry
    while (grade == -1){
      printf("%s ", "Enter 1 for pass and 2 for fail");
      scanf("%d", &grade);

      if (grade == 1){
        numPass += 1;
      }
      else if(grade != 2){
        grade = -1;
        puts("Invalid entry, try again");
      }
    }

    count += 1;
  }

  printf("Number of Students who passed : %d\n", numPass);
  printf("Number of Students who failed : %d\n", 10 - numPass);

  if (numPass > 8){
    puts("Bonus to the instructor");
  }
}

//TYJC
