all: sort clean

sort: dictionary.o main.o
	g++ -std=c++11 dictionary.o main.o -o sort -g
	
dictionary.o: dictionary.cpp
	g++ -std=c++11 -c dictionary.cpp -g
	
main.o: main.cpp
	g++ -std=c++11 -c main.cpp -g
	
clean:
	rm -rf *o