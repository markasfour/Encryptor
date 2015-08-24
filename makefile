all:
	if [ ! -d "./bin" ];\
		then mkdir bin;\
	fi
	g++ -std=c++11 src/encrypt.cpp -o bin/encrypt.o
	g++ -std=c++11 src/decrypt.cpp -o bin/decrypt.o

clean:
	rm -rf bin
