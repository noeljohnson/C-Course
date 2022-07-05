//GTG

// to find if the instructor should be given a bonus, based on their succes rates

#include<stdio.h>

int main(void){
  int grade = 0, numPass = 0, numStudents = 0;

  while(numStudents < 10){
    printf("%s ", "Enter result (1:Pass, 2:Fail)");
    scanf("%d", &grade);
    if (grade == 1){
      numPass = numPass + 1;
    }
    numStudents = numStudents + 1;
  }

  printf("Students Passed : %d\n", numPass);
  printf("Students Failed : %d\n", numStudents - numPass);

  if (numPass > 8){
    puts("Bonus to the instructor");
  }
}

//TYJC
