/*
###############################################################################
# Ref       : file:///usr/share/doc/rutebook/html/node25.html
#             22.1.7 File operations
###############################################################################
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
int main (int argc, char *argv[])
{
    int c;
    FILE *f;
 
    f = fopen ("file.txt", "r");
    if (f == 0) {
        perror ("fopen");
        return 1;
    }
    for (;;) {
        c = fgetc (f);
        if (c == -1)
            break;
        printf ("%c", c);
    }
    fclose (f);
    return 0;
}
