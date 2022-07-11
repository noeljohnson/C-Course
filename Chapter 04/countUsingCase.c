//GTG

// to count the letter grades

#include<stdio.h>

int main(void){

  int aCount = 0,
    bCount = 0,
    cCount = 0,
    dCount = 0,
    fCount = 0,
    grade;

  puts("Enter grades");
  while((grade = getchar()) != EOF){

    switch(grade){
      case 'A':
      case 'a':
        aCount++;
        break;

      case 'B':
      case 'b':
        bCount++;
        break;

      case 'C':
      case 'c':
        cCount++;
        break;

      case 'D':
      case 'd':
        dCount++;
        break;

      case 'F':
      case 'f':
        fCount++;
        break;

      case ' ':
      case '\n':
      case '\t':
        break;

      default:
        printf("Invalid grade entered : %c\n", grade);
        break;
    }

  }
  
  printf("A grade students : %d\n", aCount);
  printf("B grade students : %d\n", bCount);
  printf("C grade students : %d\n", cCount);
  printf("D grade students : %d\n", dCount);
  printf("F grade students : %d\n", fCount);

}

//TYJC
