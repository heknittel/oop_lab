CFLAGS = -Werror -Wall -Wextra
CC = g++ -std=c++20
OBJ = lot.o developed_lot.o test.o

test: test.o lot.o developed_lot.o
	$(CC) $(CFLAGS) -o test $(OBJ)

test.o: test.cpp lot.hpp developed_lot.hpp
	$(CC) $(CFLAGS) -c test.cpp

lot.o: lot.cpp lot.hpp
	$(CC) $(CFLAGS) -c lot.cpp

developed_lot.o: developed_lot.cpp developed_lot.hpp
	$(CC) $(CFLAGS) -c developed_lot.cpp

run:
	./test

clean:
	rm $(OBJ) test
