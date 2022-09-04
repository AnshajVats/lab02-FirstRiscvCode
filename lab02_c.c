#include <stdio.h>
#include <stdlib.h>

int sol_c(char ** argv, int argc) {
	int sum = 0;
	for(int  i = 0; i < argc; i++) {
		sum +=atoi(argv[i]);
	}

	return sum;
}

int solQuad_c(char ** argv, int argc) {
	int x, a, b, c = 0;
	int temp = atoi(argv[1]);
	int temp2 = atoi(argv[3]);
	
	temp *= temp;
	temp *= atoi(argv[2]);
	temp2 *= atoi(argv[1]);

	temp += temp2;

	temp += atoi(argv[4]);

	return temp;
}

int solMin_c(char ** argv, int argc) {
	return atoi(argv[1]) > atoi(argv[2]) ? atoi(argv[2]) : atoi(argv[1]);
}


