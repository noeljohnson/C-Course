//GTG

/*
  (Calculating Credit Limits) Collecting money becomes increasingly difficult during periods of 
  recession, so companies may tighten their credit limits to prevent their accounts receivable 
  (money owed to them) from becoming too large. In response to a prolonged recession, one company 
  has cut its customers’ credit limits in half. Thus, if a particular customer had a credit limit 
  of $2000, it’s now $1000. If a customer had a credit limit of $5000, it’s now $2500. 
  Write a program that analyzes the credit status of three customers of this company. 
  For each customer you’re given: 
    a) The customer’s account number. 
    b) The customer’s credit limit before the recession. 
    c) The customer’s current balance (i.e., the amount the customer owes). 
  Your program should calculate and print the new credit limit for each customer and determine 
  (and print) which customers have balances that exceed their new credit limits.
*/

#include<stdio.h>

int main(void){
  int accNumber;
  double credLimitPrev, credLimitNew, currBalance;

  printf("%s ", "Enter account number");
  scanf("%d", &accNumber);

  printf("%s ", "Enter credit limit before recession");
  scanf("%lf", &credLimitPrev);

  printf("%s ", "Enter balance owed to bank");
  scanf("%lf", &currBalance);

  credLimitNew = 0.5 * credLimitPrev;

  printf("The new credit limit is %.2f\n", credLimitNew);

  if (currBalance > credLimitNew){
    puts("You\'re current balance exceeds the credit limit");
  }
}

//TYJC
