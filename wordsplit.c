/*
###############################################################################
# file:///usr/share/doc/rutebook/html/node25.html
# 22.1.9 A more complicated example
# ./wordsplit <file>, e.g. ./wordsplit README
#
# file:///usr/share/doc/rutebook/html/node25.html
# 22.2 Debugging with gdb and strace
# 22.2.1 gdb
# Debugging:
# gcc -Wall -g -O0 -o wordsplit wordsplit.c
# gdb -q wordsplit   (start quiet debugging wordsplit)
#   set args README    (vul alsnog filename in als argument)
#   b main             (break main)
#   r                  (run wordsplit)
#   p argc             (print argc variabele)
#   p p argv[1]        (print argv[1] variabele)
#   c                  (continue)
#   q                  (quit The GNU Debugger)
# file:///usr/share/doc/rutebook/html/node25.html
# 22.2 Debugging with gdb and strace
# 22.2.3 strace
# strace ./wordsplit (display iedere system call)
#
# SPDX-FileCopyrightText: Karel Zimmer <info@karelzimmer.nl>
# SPDX-License-Identifier: CC0-1.0
###############################################################################
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void word_dump (char *filename)
{
    int length_of_word;
    int amount_allocated;
    char *q;
    FILE *f;
    int c;

    c = 0;

    f = fopen (filename, "r");
    if (f == 0) {
        perror ("fopen failed");
        exit (1);
    }

    length_of_word = 0;

    amount_allocated = 256;
    q = malloc (amount_allocated);
    if (q == 0) {
        perror ("malloc failed");
        abort ();
    }

    while (c != -1) {
        if (length_of_word >= amount_allocated) {
            amount_allocated = amount_allocated * 2;
            q = realloc (q, amount_allocated);
            if (q == 0) {
                perror ("realloc failed");
                abort ();
            }
        }

        c = fgetc (f);
        q[length_of_word] = c;

        if (c == -1 || c == ' ' || c == '\n' || c == '\t') {
            if (length_of_word > 0) {
                q[length_of_word] = 0;
                printf ("%s\n", q);
            }
            amount_allocated = 256;
            q = realloc (q, amount_allocated);
            if (q == 0) {
                perror ("realloc failed");
                abort ();
            }
            length_of_word = 0;
        } else {
            length_of_word = length_of_word + 1;
        }
    }

    fclose (f);
}

int main (int argc, char *argv[])
{
    int i;

    if (argc < 2) {
        printf ("Usage:\n\twordsplit <filename> ...\n");
        exit (1);
    }

    for (i = 1; i < argc; i++) {
        word_dump (argv[i]);
    }

    return 0;
}
