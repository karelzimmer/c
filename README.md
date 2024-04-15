<!---
###############################################################################
# SPDX-FileComment: Readme for repository c
#
# SPDX-FileCopyrightText: Karel Zimmer <info@karelzimmer.nl>
# SPDX-License-Identifier: CC0-1.0
###############################################################################
--->

# c

My C programs.

For (self) study. Work in progress.

## Method

```console
cd ~/c
```

Edit hello.c:

```c
#include <stdlib.h>
#include <stdio.h>
 
int main (int argc, char *argv[])
{
    printf ("Hello World!\n");
    return 3;
}
```

Compile:

```console
gcc -Wall -o hello hello.c
```

Run:

```console
./hello
```

Output:

```console
Hello World!
```
