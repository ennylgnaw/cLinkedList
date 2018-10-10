all: linkedList.o driver.o
	gcc -o test linkedList.o driver.o

linkedlist.o: linkedList.c linkedList.h
	gcc -c linkedlist.c

driver.o: driver.c linkedList.h
	gcc -c driver.c

run:
	./test

clean:
	rm *.o
