/*
###############################################################################
# Ref       : file:///usr/share/doc/rutebook/html/node25.html
#             22.1.1 The simplest C program
# Compileren: gcc -Wall -o number1 number1.c
###############################################################################
*/
#include <stdlib.h>
#include <stdio.h>
 
int main (int argc, char *argv[])
{
    printf ("number %d, number %d\n", 1 + 2, 10);
    exit (3);
}
