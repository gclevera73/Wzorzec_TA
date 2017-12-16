all: unordered_set

unordered_set: unordered_set.o
	g++ -g -Wall -pedantic $^ -o $@

unoredered_set.o: unordered_set.cpp employee.h
	g++ -g -c -Wall -pedantic $< -o $@

.PHONY: clean

clean:
	-rm unordered_set.o unordered_set