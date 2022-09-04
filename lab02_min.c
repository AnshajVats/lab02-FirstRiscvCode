#include <stdlib.h>
#include <stdio.h>

int solMin_c(char ** argv, int argc);
int solMin_asm(int num1, int num2);

int main(int argc, char **argv) {
	int c = solMin_c(argv, argc);
	int riscv = solMin_asm(atoi(argv[1]), atoi(argv[2]));

	printf("C: %d \nAsm: %d \n", c, riscv);
	return  0;
}
