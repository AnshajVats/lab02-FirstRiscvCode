#include <stdio.h>
#include <stdlib.h>

int solQuad_c(char ** argv, int argc);
int solQuad_asm(int num1, int num2, int num3, int num4);

int main(int argc, char ** argv) {
	int c = solQuad_c(argv, argc);
	int riscv = solQuad_asm(atoi(argv[1]),atoi(argv[2]),atoi(argv[3]),atoi(argv[4]));
	
	printf("C: %d \nAsm: %d \n", c, riscv);
	return 0;
}
