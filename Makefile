CPP = g++
CFLAGS = -Wall -Wextra -Werror

Entry.o: Entry.h Entry.cpp
	$(CPP) $(CFLAGS) -c Entry.cpp

clean:
	rm -f *.o; 
