

.global solQuad_asm

/* takes four number does quadratic equations
a0 = x
a1 = a
a2 = b
a3 = c
*/


solQuad_asm:

	li t0, 0
	li t1, 0

	mul t0, a0, a0  /* t0 = x * x  */

	mul t0, t0, a1	/* t0 *= a  */

	mul t1, a0, a2 	#t1 = x * b  

	ADD t0, t0, t1 	# t0 += t1 

	ADD t0, t0, a3	# t0 += a3  


	mv a0, t0

ret

	
