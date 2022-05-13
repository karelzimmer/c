/**************************************************************************/
/* Ref       : file:///usr/share/doc/rutebook/html/node25.html            */
/*             22.1.5 Strings, arrays, and memory allocation              */
/* Compileren: $ gcc -Wall -o array4 array4.c                             */
/**************************************************************************/
#include <stdlib.h>
#include <stdio.h>
 
int main (int argc, char *argv[])
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    a = sizeof (char);
    b = sizeof (short);
    c = sizeof (int);
    d = sizeof (long);
    e = sizeof (float);
    f = sizeof (double);
    g = sizeof (long double);
    printf ("%d, %d, %d, %d, %d, %d, %d\n", a, b, c, d, e, f, g);
    return 0;
}
