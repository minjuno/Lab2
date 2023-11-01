staticout : staticlib.a
	cd ..;gcc -I./lib -L./lib main.c lib/staticlib.a -o staticout

add.o : add.c
	gcc -c add.c

sub.o : sub.c
	gcc -c sub.

mul.o : mul.c
	gcc -c mul.c

div.o : div.c
	gcc -c div.o

staticlib.a : add.o sub.o mul.o div.o
	ar rcs staticlib.a add.o sub.o mul.o div.o

clean :
	rm -f staticlib.a add.o sub.o mul.o div.o
	cd ..;rm staticout
	
