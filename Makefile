demo: main.o singleton.o state_pattern.o
	clang++ -o demo main.o singleton.o state_pattern.o

main.o: main.cpp
	clang++ -g -c main.cpp

singleton.o: singleton.cpp
	clang++ -g -c singleton.cpp

state.o: state_pattern.cpp
	clang++ -g -c state_pattern.cpp

clean:
	rm -rf *.o demo
