/*
###############################################################################
# Ref       : file:///usr/share/doc/rutebook/html/node25.html
#             22.1.4 for, while, if, and switch statements
###############################################################################
*/
#include <stdlib.h>
#include <stdio.h>
 
int main (int argc, char *argv[])
{
    int x;
 
    x = 10;
 
    if (x == 10) {
        printf ("x is exactly 10\n");
        x++;
    } else if (x == 20) {
        printf ("x is equal to 20\n");
    } else {
        printf ("No, x is not equal to 10 or 20\n");
    }
 
    if (x > 10) {
        printf ("Yes, x is more than 10\n");
    }
 
    while (x > 0) {
        printf ("x is %d\n", x);
        x = x - 1;
    }
 
    for (x = 0; x < 10; x++) {
        printf ("x is %d\n", x);
    }
 
    switch (x) {
        case 9:
            printf ("x is nine\n");
            break;
        case 10:
            printf ("x is ten\n");
            break;
        case 11:
            printf ("x is eleven\n");
            break;
        default:
            printf ("x is huh?\n");
            break;
    }
 
    return 0;
}
