CC = gcc
CFLAGS = -I.
DEPS = read_rec.h
OBJ = read_rec.c main.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

myrec: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	$(RM) myrec *.o *~
