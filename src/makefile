OPTS=-g -Wall -std=c++11
OBJS= mips.o alu.o syscall.o memoria.o desplazadores.o
CC=g++


mips: $(OBJS)
	$(CC) $(OPTS) $(OBJS) -o mips-emu


mips.o: mips.cc alu.h desplazadores.h
	$(CC) $(OPTS) -c mips.cc

alu.o: alu.cc alu.h desplazadores.h
	$(CC) $(OPTS) -c alu.cc

syscall.o: syscall.cc syscall.h
	$(CC) $(OPTS) -c syscall.cc

memoria.o: memoria.cc memoria.h
	$(CC) $(OPTS) -c memoria.cc

desplazadores.o: desplazadores.cc desplazadores.h
	$(CC) $(OPTS) -c desplazadores.cc

clean:
	rm $(OBJS)
