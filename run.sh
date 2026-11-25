#!/bin/bash

rm -f Dolus
gcc -O3 -march=native Dolus.c -o Dolus -lgcrypt
./Dolus
