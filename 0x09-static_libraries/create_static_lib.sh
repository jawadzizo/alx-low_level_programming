#!/bin/bash
gcc - *.c -o *.o
ar rsc liball.a *.o
