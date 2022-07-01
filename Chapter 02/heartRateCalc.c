//GTG

// A program to calculate the range of heart rate when exercising


#include<stdio.h>

int main(void){

  int age;
  printf("%s ", "Enter your age in years {int}");
  scanf("%d", &age);

  int  maxHeartRate = 220 - age;

  printf("While exercising your heart beat count should be in the range of (%d, %d)\n", 
    maxHeartRate/2, maxHeartRate * 17 / 20);
}

//TYJC
