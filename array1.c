/*
###############################################################################
# Ref       : file:///usr/share/doc/rutebook/html/node25.html
#             22.1.5 Strings, arrays, and memory allocation
# Compileren: gcc -Wall -o array1 array1.c
###############################################################################
*/
#include <stdlib.h>
#include <stdio.h>
 
int main (int argc, char *argv[])
{
    int x;
    int y[10];
    for (x = 0; x < 10; x++) {
        y[x] = x * 2;
    }
    for (x = 0; x < 10; x++) {
        printf ("item %d is %d\n", x, y[x]);
    }
    return 0;
}
