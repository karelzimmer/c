/******************************************************************************
Ref       : file:///usr/share/doc/rutebook/html/node25.html
            22.1.5 Strings, arrays, and memory allocation
Compileren: gcc -Wall -o array5 array5.c
******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
 
int main (int argc, char *argv[])
{
    int x;
    int *y;
    y = malloc (10 * sizeof (int));
    printf ("%ld\n", y);
    for (x = 0; x < 10; x++) {
        y[x] = 65 + x * 2;
    }
    for (x = 0; x < 10; x++) {
        printf ("%d\n", y[x]);
    }
    free (y);
    return 0;
}
