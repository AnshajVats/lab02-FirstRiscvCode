#include <stdio.h>
#include <stdlib.h>

int sol_c(char ** argv, int argc) {
	int sum = 0;
	for(int  i = 0; i < argc; i++) {
		sum +=atoi(argv[i]);
	}

	return sum;
}


