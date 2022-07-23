//GTG

// to simulate N carps and find out the win and loose distr

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

enum Status {CONTINUE, WON, LOST};

int rollDie(void);
int simCarp(int prompt);

int main(void){
  srand(time(NULL));
  simCarp(1);
  int n = 1000000, winFreq;
  for (int i = 0; i < n; i++){
    winFreq += simCarp(0);
  }

  printf("#Wins : %d\n", winFreq);
  printf("#Loss : %d\n", n - winFreq);
}

int simCarp(int prompt){
  int dieRes = rollDie() + rollDie();
  enum Status gameStatus = CONTINUE;

  if (prompt){
    printf("Die Roll result is : %d\n", dieRes);
  }
  
  switch(dieRes){
    case 7:
    case 11:
      gameStatus = WON;
      break;
    case 2:
    case 3:
    case 12:
      gameStatus = LOST;
      break;
    default:
      gameStatus = CONTINUE;
  }

  int currRoll;
  while (gameStatus == CONTINUE){
    currRoll = rollDie() + rollDie();
    if (currRoll == 7){
      gameStatus = LOST;
    }
    else if (currRoll == dieRes){
      gameStatus = WON;
    }

    if (prompt){
      printf("Next roll resulted in %d\n", currRoll);
    }
  }
  if(prompt){
    puts((gameStatus == WON) ? "YOU WON" : "YOU LOST");
  }
 
  return (gameStatus ==  WON);
}

int rollDie(){
  return rand() % 6 + 1;
}

//TYJC
