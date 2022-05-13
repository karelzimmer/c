/**************************************************************************/
/* Ref       : file:///usr/share/doc/rutebook/html/node25.html            */
/*             22.1.2 Variables and types                                 */
/* Compileren: $ gcc -Wall -o number2 number2.c                           */
/**************************************************************************/
#include <stdlib.h>
#include <stdio.h>
 
int main (int argc, char *argv[])
{
    int x;
    int y;
    x = 10;
    y = 2;
    printf ("number %d, number %d\n", 1 + y, x);
    exit (3);
}
