//GTG

// to understand scoping and storage in C

#include<stdio.h>

void useLocal(void);
void useGlobal(void);
void useLocalStatic(void);

int x = 1;

int main(){
	int x = 5;
	printf("local x in outer scope of main is %d\n", x);
	{
		int x = 7;
		printf("local x in innerscope of main is %d\n", x);
	}
	printf("local x in outer scope of main is %d\n", x);
	puts("");

	useLocal();
	puts("");

	useLocalStatic();
	puts("");

	useGlobal();
	puts("");

  useLocal();
  puts("");
 
  useLocalStatic();
  puts("");
 
  useGlobal();
  puts("");
	
	printf("local x in main is %d\n", x);

}

void useLocal(void){
	int x = 25;
	printf("local x in useLocal is %d after entering useLocal\n", x);
	x++;
	printf("local x in useLocal is %d before leaving useLocal\n", x);
}

void useLocalStatic(void){
  static int x = 50;
  printf("local x in useLocalStatic is %d after entering useLocalStatic\n", x);
  x++;
  printf("local x in useLocalStatic is %d before leaving useLocalStatic\n", x);
}

void useGlobal(void){
  printf("global x in useGlobal is %d after entering useGlobal\n", x);
  x *= 10;
  printf("global x in useGlobal is %d before leaving useGlobal\n", x);
}

//TYJC
