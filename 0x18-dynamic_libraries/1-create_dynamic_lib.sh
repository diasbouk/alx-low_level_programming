#!/bin/bash
gcc *.c -c -fPIC
gcc --shared -o libdynamic.so *.o
