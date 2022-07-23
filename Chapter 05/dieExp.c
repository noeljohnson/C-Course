//GTG

// using rand() to simulate throwing a die 60,000,000 times and checking the freq of each face

#include<stdio.h>
#include<stdlib.h>

int main(void){

  int freq1, freq2, freq3, freq4, freq5, freq6, n = 60000000, face;
  freq1 = freq2 = freq3 = freq4 = freq5 = freq6 = 0; // initializing freq to zero

  for (int i = 0; i < n; i++){
    face = 1 + rand() % 6;

    switch(face){
      case 1:
        freq1++;
        break;
      case 2:
        freq2++;
        break;
      case 3:
        freq3++;
        break;
      case 4:
        freq4++;
        break;
      case 5:
        freq5++;
        break;
      case 6:
        freq6++;
        break;
      default:
        puts("How did this occur");
        break;
      
    }

  }

  printf("face 1 : %d\n", freq1);
  printf("face 2 : %d\n", freq2);
  printf("face 3 : %d\n", freq3);
  printf("face 4 : %d\n", freq4);
  printf("face 5 : %d\n", freq5);
  printf("face 6 : %d\n", freq6);

  return(0);
}

//TYJC
