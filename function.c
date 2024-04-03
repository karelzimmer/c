/*
###############################################################################
# Ref: file:///usr/share/doc/rutebook/html/node25.html
#      22.1.3 Functions
#
# SPDX-FileCopyrightText: Karel Zimmer <info@karelzimmer.nl>
# SPDX-License-Identifier: CC0-1.0
###############################################################################
*/
#include <stdlib.h>
#include <stdio.h>
 
void mutiply_and_print (int x, int y)
{
    printf ("%d * %d = %d\n", x, y, x * y);
}
 
int main (int argc, char *argv[])
{
    mutiply_and_print (30, 5);
    mutiply_and_print (12, 3);
    exit (3);
}
