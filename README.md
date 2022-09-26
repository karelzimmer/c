# c

Mijn C-programma's.
Voor (zelf)studie. Werk in uitvoering.

## Werkwijze

```sh
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

```sh
gcc -Wall -o hello hello.c
```

Run:

```sh
./hello
```

Output:

```console
Hello World!
```
