

.global sol_asm

/*
	sol_asm takes an array to number adds then up
*/


sol_asm:
	li t0, 0

	ADD t0, t0, a0
	ADD t0, t0, a1
	ADD t0, t0, a2
	ADD t0, t0, a3

	mv a0, t0
	
	ret

	
	
