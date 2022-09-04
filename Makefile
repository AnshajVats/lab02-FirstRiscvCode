OBJS = lab02.o lab02_c.o lab02_asm.o
OBJS_quadractic = lab02_quadractic.o lab02_c.o lab02_quadractic_asm.o
OBJS_min = lab02_min.o lab02_c.o lab02_min_asm.o
PROG = add4 quadratic min


%.o: %.c

	gcc -c -g -o $@ $<  

%.o: %.s
	as -g -o $@ $<

all : $(PROG)

add4 : $(OBJS)

	gcc -g -o $@ $^	
	
quadratic : $(OBJS_quadractic)
	gcc -g -o $@ $^	

min : $(OBJS_min)
	gcc -g -o $@ $^

clean:

	rm -rf $(OBJS) $(OBJS_quadractic) $(OBJS_min) $(PROG) 
