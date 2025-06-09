CC = gcc
CFLAGS = -Wall -Wextra -std=c11

OBJS = main.o utils/io.o sorts/bubble_sort.o sorts/insert_sort.o sorts/merge_sort.o sorts/quick_sort.o sorts/select_sort.o algorithms/algorithms.o

all: sorter

sorter: $(OBJS)
	$(CC) $(CFLAGS) -o sorter $(OBJS)

main.o: main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

utils/io.o: utils/io.c utils/io.h
	$(CC) $(CFLAGS) -c utils/io.c -o utils/io.o

sorts/%.o: sorts/%.c sorts/%.h
	$(CC) $(CFLAGS) -c $< -o $@

algorithms/algorithms.o: algorithms/algorithms.c algorithms/algorithms.h
	$(CC) $(CFLAGS) -c algorithms/algorithms.c -o algorithms/algorithms.o

clean:
	rm -f *.o utils/*.o sorts/*.o algorithms/*.o sorter
