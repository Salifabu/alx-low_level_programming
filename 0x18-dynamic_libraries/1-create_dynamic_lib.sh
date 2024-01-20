#!/bin/bash
gcc -o *.c -fpic 
gcc .o -shared -o liball.so
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
