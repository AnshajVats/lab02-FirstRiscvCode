OBJS = lab02.o lab02_c.o lab02_asm.o
PROG = lab02

%.o: %.c

	gcc -c -g -o $@ $<  

%.o: %.s
	as -g -o $@ $<

$(PROG): $(OBJS)

	gcc -g -o $@ $^
clean:

	rm -rf $(OBJS) $(PROG) 
