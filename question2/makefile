CC = gcc
CFLAGS = -w -g -I.
DEPS = record_struct.h read_rec.h display_rec.h
OBJ = read_rec.c display_rec.c main.o 

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

myrec: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	$(RM) myrec *.o *~
