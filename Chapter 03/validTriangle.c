//GTG

// To check if the three given sides can form a triangle

#include<stdio.h>

int main(void){

  int a, b, c, // three sides of a traingle
  l1, l2, l3, // meant to the store the sides in a sorted order
  temp; // will be used during sorting
  int entryValid = 1;
  printf("%s ", "Enter the three sides of a triangle");
  scanf("%d %d %d", &a, &b, &c);

  if (a < 0){
    entryValid = 0;
  }
  if (b < 0){
    entryValid = 0;
  }
  if (c < 0){
    entryValid = 0;
  }

  if (entryValid){
    l1 = a;
    l2 = b;
    l3 = c;

    if (l1 > l2){
      temp = l2;
      l2 = l1;
      l1 = temp;
    }
    if (l1 > l3){
      temp = l3;
      l3 = l1;
      l1 = temp;
    }
    if (l2 > l3){
      temp = l3;
      l3 = l2;
      l2 = temp;
    }

    if (l1 + l2 > l3){
      printf("%d, %d and %d forms a valid triangle\n", a, b, c);
    }
    else{
      printf("%d, %d, %d doesnt form a valid triangle\n", a, b, c);
    }
  }

  else{
    puts("Invalid entry for sides");
  }

}

//TYJC
