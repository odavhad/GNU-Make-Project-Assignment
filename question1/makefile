CFLAGS = -w -g -I.

default: myencrypt 

myencrypt: read_src.o convert_cipher.o display_cipher.o main.o 
	gcc -o myencrypt read_src.o convert_cipher.o display_cipher.o main.o $(CFLAGS)

read_src.o: read_src.c 
	gcc -c read_src.c $(CFLAGS)

convert_cipher.o: convert_cipher.c 
	gcc -c convert_cipher.c $(CFLAGS)

display_cipher.o: display_cipher.c 
	gcc -c display_cipher.c $(CFLAGS)

main.o: main.c 
	gcc -c main.c $(CFLAGS)

clean: 
	rm -rf myencrypt *.o *~
