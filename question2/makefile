CFLAGS = -w -g -I. 

default: myrec 

myrec: read_rec.o display_rec.o sort_rec.o main.o 
	gcc -o myrec read_rec.o display_rec.o sort_rec.o main.o $(CFLAGS) 

read_rec.o: read_rec.c 
	gcc -c read_rec.c $(CFLAGS) 

display_rec.o: display_rec.c 
	gcc -c display_rec.c $(CFLAGS) 

sort_rec.o: sort_rec.c 
	gcc -c sort_rec.c $(CFLAGS) 

main.o: main.c 
	gcc -c main.c $(CFLAGS) 

clean: 
	rm -rf myrec *.o *~ 
