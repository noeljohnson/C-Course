//GTG

// to solve the dangling else issue with this code

/*

if (y == 8) 
if (x == 5) 
puts("@@@@@"); 
else puts("#####"); 
puts("$$$$$"); 
puts("&&&&&"); 


a) Assuming x = 5 and y = 8, the following output is produced.
@@@@@ 
$$$$$ 
&&&&&

b) Assuming x = 5 and y = 8, the following output is produced. 
@@@@@

c) Assuming x = 5 and y = 8, the following output is produced. 
@@@@@ 
&&&&& 

d) Assuming x = 5 and y = 7, the following output is produced. 
##### 
$$$$$ 
&&&&&

*/

#include<stdio.h>

int main(void){

  int x = 5, y = 8;

  // part - a
  if (y == 8){
    if (x == 5){
      puts("@@@@@"); 
    }
    else{
      puts("#####");
    }

    puts("$$$$$"); 
    puts("&&&&&"); 

  }

  printf("%s","\n\n");

  //part - b
  if (y == 8){
    if (x == 5){
      puts("@@@@@"); 
    }
    else{
      puts("#####");
      puts("$$$$$"); 
      puts("&&&&&"); 
    }

  }

  printf("%s","\n\n");

  //part - c
  if (y == 8){
    if (x == 5){
      puts("@@@@@"); 
    }
    else{
      puts("#####");
      puts("$$$$$"); 
    }

    puts("&&&&&"); 

  }

  printf("%s","\n\n");

  //part - d
  y = 7;
  if (y == 8){
    if (x == 5){
      puts("@@@@@"); 
    }
  }
  else{
    puts("#####");
    puts("$$$$$"); 
    puts("&&&&&"); 

  }

  printf("%s","\n\n");

}

//TYJC
