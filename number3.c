/******************************************************************************
Ref       : file:///usr/share/doc/rutebook/html/node25.html
            22.1.2 Variables and types
Compileren: gcc -Wall -o number3 number3.c
******************************************************************************/
#include <stdlib.h>
#include <stdio.h>
 
int main (int argc, char *argv[])
{
    char a;
    short b;
    int c;
    long d;
    float e;
    double f;
    long double g;
    a = 'A';
    b = 10;
    c = 10000000;
    d = 10000000;
    e = 3.14159;
    f = 10e300;
    g = 10e300;
    printf ("%c, %hd, %d, %ld, %f, %f, %Lf\n", a, b, c, d, e, f, g);
    exit (3);
}
