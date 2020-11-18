CC = gcc
CFLAGS = -w -g -I.
DEPS = read_rec.h record_struct.h
OBJ = read_rec.c main.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

myrec: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	$(RM) myrec *.o *~
