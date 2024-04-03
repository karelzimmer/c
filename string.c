/*
###############################################################################
# Ref: file:///usr/share/doc/rutebook/html/node25.html
#      22.1.6 String operations
#
# SPDX-FileCopyrightText: Karel Zimmer <info@karelzimmer.nl>
# SPDX-License-Identifier: CC0-1.0
###############################################################################
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
int main (int argc, char *argv[])
{
    int length_of_word;
    int i;
    int length_of_sentence;
    char p[256];
    char *q;
 
    strcpy (p, "hello there, my name is fred.");
 
    length_of_sentence = strlen (p);
 
    length_of_word = 0;
 
    for (i = 0; i <= length_of_sentence; i++) {
        if (p[i] == ' ' || i == length_of_sentence) {
            q = malloc (length_of_word + 1);
            if (q == 0) {
                perror ("malloc failed");
                abort ();
            }
            strncpy (q, p + i - length_of_word, length_of_word);
            q[length_of_word] = 0;
            printf ("word: %s\n", q);
            free (q);
            length_of_word = 0;
        } else {
            length_of_word = length_of_word + 1;
        }
    }
    return 0;
}
