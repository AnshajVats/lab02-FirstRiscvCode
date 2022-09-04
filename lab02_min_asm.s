

.global solMin_asm

/* a0 = a number
   a1  = a number

   find the smaller number
*/

solMin_asm:

	BLT a0, a1, done
	mv a0, a1
	ret


done :

	ret

