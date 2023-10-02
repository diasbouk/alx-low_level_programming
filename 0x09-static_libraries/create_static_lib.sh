#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
gcc -c *.c
randlib liball.a
