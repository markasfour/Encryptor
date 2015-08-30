# Encryptor
RSA encryption and decryption program.

## Download and Run
Clone this repository by running the following in a terminal:
	git clone http://github.com/markasfour/Encryptor

To use the encryption program, run the following in a terminal:
	make
	bin/encryptor.o

To use the decryption program, run the following in a terminal:
	make
	cd src
	./decryption.sh

Note: if `decryption.sh` does not appear as an executable file, run the following:
	chmod u+x decryption.sh

## Features
* RSA encryption program that encrypts an inputted string
* Encryption program takes user step-by-step in the RSA encryption process
* Can encrypt all keyboard characters
* RSA decryption program translates an inputted encrypted string after public and private password inputs
* Decryption program explicitly asks for public and private password
* Can decrypt all keyboard characters

## Bugs and Limitations
* Current functionality only tested in Linux
* Encryption program must be run from the `bin` folder (`bin` created after running `make`)
* Decryption program must be run in the `src` folder by running the `decrypt.sh` script
* Program assumes user enters values correctly when prompted (can crash otherwise)
* Encryption is limited by `int` size capacity
* Encrypted letters will repeat their values
* Please report any bugs found here under Issues
