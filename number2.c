/*
###############################################################################
# Ref: file:///usr/share/doc/rutebook/html/node25.html
#      22.1.2 Variables and types
#
# SPDX-FileCopyrightText: Karel Zimmer <info@karelzimmer.nl>
# SPDX-License-Identifier: CC0-1.0
###############################################################################
*/
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
