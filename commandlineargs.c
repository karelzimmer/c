/******************************************************************************
Ref       : file:///usr/share/doc/rutebook/html/node25.html
            22.1.8 Reading command-line arguments inside C programs
Compileren: gcc -Wall -o commandlineargs commandlineargs.c
******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
int main (int argc, char *argv[])
{
    int i;
    for (i = 0; i < argc; i++) {
        printf ("argument %d is %s\n", i, argv[i]);
    }
    return 0;
}
