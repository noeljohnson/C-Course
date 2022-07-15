//GTG

// To describe the pattern printed by the program

/* My guesses are

****
****
****

****
****
****

****
****
****

****
****
****

****
****
****


*/

#include<stdio.h>

int main(void){
  for (int i = 1; i <= 5; ++i) 
  { 
    for (int j = 1; j <= 3; ++j) 
    { 
      for (int k = 1; k <= 4; ++k) 
      { 
        printf("%s", "*"); 
      } 
      puts(""); 
    } 
    puts(""); 
  }
}

//TYJC
