//GTG

// to print an asterix square

#include<stdio.h>

int main(void){
  int size;

  printf("%s ", "Enter size of the asterix square");
  scanf("%d", &size);

  if(size < 1){
    puts("Invalid size");
  }
  else if (size < 21){
    int i = 0, j;
    while (i < size){
      j = 0;
      while (j < size){
        printf("%s", "*");
        j++;
      }
      puts("");
      i++;
    }
  }
  else{
    puts("Invalid size");
  }
  
}

//TYJC
