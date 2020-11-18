CC = gcc
CFLAGS = -w -g -I.
DEPS = record_struct.h read_rec.h display_rec.h sort_rec.h
OBJ = read_rec.c display_rec.c sort_rec.c main.c

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

myrec.out: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	$(RM) myrec.out *.o *~
