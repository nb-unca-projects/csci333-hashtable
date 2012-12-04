CPP = g++
CFLAGS = -Wall -Wextra -Werror

all: Hash.o Entry.o htest

htest: htest.cpp Hash.o Entry.o
	$(CPP) $(CFLAGS) -o htest $^

Hash.o: Hash.h Hash.cpp
	$(CPP) $(CFLAGS) -c Hash.cpp

Entry.o: Entry.h Entry.cpp
	$(CPP) $(CFLAGS) -c Entry.cpp

clean:
	rm -f *.o; 
	rm -f htest;
