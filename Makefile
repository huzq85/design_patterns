demo: main.o singleton.o
	clang++ -o demo main.o singleton.o

main.o: main.cpp
	clang++ -g -c main.cpp

singleton.o: singleton.cpp
	clang++ -g -c singleton.cpp


clean:
	rm -rf *.o demo
