#!/bin/bash

printf "Enter the encrypted sentence you would like to decrypt: \n"
sentence=""
read sentence
../bin/decrypt.o $sentence
