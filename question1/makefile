CC = gcc
CFLAGS = -w -g -I.
DEPS = read_src.h convert_cipher.h display_cipher.h
OBJ = read_src.c convert_cipher.c display_cipher.c main.c

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

myencrypt: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	$(RM) myencrypt *.o *~
