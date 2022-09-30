## Program Overview

libmy.a, main.h >> creating a static library

create_static_lib.sh >> script that creates a static library 

## Resouces

[Building and Using Static And Shared "C" Libraries](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html#creating_static_archive)

[Building your own C static library](https://alx-intranet.hbtn.io/concepts/61)

## Read more

`man gcc`

`man ar`

`man ranlib`

## Static library Build syntax

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c`

`ar -rc xyz.a *.o`
