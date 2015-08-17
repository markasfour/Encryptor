all:
	if [ ! -d "./bin" ];\
		then mkdir bin;\
	fi
	g++ -std=c++11 src/encrypt.cpp -o bin/encrypt.o

clean:
	rm -rf bin
