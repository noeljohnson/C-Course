//GTG

// to correct the given codes

#include<stdio.h>

int main(void){

  /*

  For (x = 100, x >= 1, ++x) 
    { 
      printf("%d\n", x); 
    }

  */

  // to count backwards from 100 to 1
  for (int x = 100; x >= 1; --x) 
    { 
      printf("%d, ", x); 
    }

  puts("");

  /*

  switch (value % 2) 
  { 
    case 0: 
      puts("Even integer"); 
    case 1: 
      puts("Odd integer"); 
  }

  */


  // checks if value is odd or even and prints a message to that extent
  int value = 1;

  switch (value % 2) 
  { 
    case 0: 
      puts("Even integer");
      break; 
    case 1: 
      puts("Odd integer");
      break; 
  }

  /*

  scanf("%d", &intVal); 
  charVal = getchar(); 
  printf("Integer: %d\nCharacter: %c\n", intVal, charVal);

  */

  //takes an integer a space and a character and displays it
  int intVal = 99, charVal = 'A';
  
  scanf("%d", &intVal);
  getchar(); 
  charVal = getchar(); 
  printf("Integer: %d\nCharacter: %c\n", intVal, charVal);

  /*

  for (x = .000001; x == .0001; x += .000001) 
    { 
      printf("%.7f\n", x); 
    }

  */

  // prints x from .000001 to .0001 in increaments of .000001
  for (double x = .000001; x <= .0001; x += .000001) 
    { 
      printf("%.7f, ", x); 
    }
  puts("");

  /*

  for (x = 999; x >= 1; x += 2) 
    { 
      printf("%d\n", x); 
    }

  */

  // prints all odd inetegrs from 999 to 1
  for (int x = 999; x >= 1; x -= 2) 
    { 
      printf("%d, ", x); 
    }
  puts("");

  /*

  counter = 2; 
  Do 
  { 
    if (counter % 2 == 0) 
    { 
      printf("%d\n", counter); 
    } 
    counter += 2; 
  } While (counter < 100);

  */

  // prints all odd integers from 2 to 100
  int counter = 2; 

  do 
  { 
    printf("%d, ", counter);
    counter += 2; 
  } while (counter <= 100);

  puts("");

  /*

  for (x = 100; x <= 150; ++x); 
  { 
    total += x; 
  }

  */

  //sum all integers from 100 to 150

  int total = 0;
  for (int x = 100; x <= 150; ++x) 
  { 
    total += x; 
  }

  printf("Total : %d\n", total);

  
}


//TYJC
