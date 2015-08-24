#!/bin/bash

printf "Enter the encrypted sentence you would like to decrypt: \n"
sentence=""
read sentence
printf "Enter decrypt public password n: \n"
n=0
read n
printf "Enter decrypt private password d: \n"
d=0
read d
../bin/decrypt.o $n $d $sentence
