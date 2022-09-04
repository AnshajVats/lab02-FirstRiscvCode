#include<stdio.h>
#include<stdlib.h>

int sol_c(char ** argv, int argc);
int sol_asm(int num1, int num2, int num3, int num4);


int main(int argc, char * argv[]) {

	// add multiple numbers
	int c = sol_c(argv, argc);
	int riscv = sol_asm(atoi(argv[1]),atoi(argv[2]),atoi(argv[3]),atoi(argv[4]));

	printf("C: %d \nAsm: %d \n", c, riscv);
	
	return 0;
}
