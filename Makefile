demo: main.o singleton.o
	clang++ -o demo main.o singleton.o

main.o: main.cpp
	clang++ -c main.cpp

singleton.o: singleton.cpp
	clang++ -c singleton.cpp


clean:
	rm -rf *.o demo