//GTG

//display the decimal binary octal equivalent

#include<stdio.h>

int main(void){
  printf("%3s|%-9s|%3s\n", "Dec", "   Bin", "Oct");
  int bin, oct, radix, decCopy, mult;
  for (int dec = 0; dec < 256; dec++){

    radix = 2;
    decCopy = dec;
    bin = 0;
    mult = 1;
    while (decCopy){
      bin += mult * (decCopy % radix);
      decCopy /= radix;
      mult *= 10; 
    }

    radix = 8;
    decCopy = dec;
    oct = 0;
    mult = 1;
    while (decCopy){
      oct += mult * (decCopy % radix);
      decCopy /= radix; 
      mult *= 10; 
    }

    printf("%3d|%9d|%3d\n", dec, bin, oct);

  }
}

//TYJC
