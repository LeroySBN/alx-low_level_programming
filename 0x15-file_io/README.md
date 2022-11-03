## File I/O Program Overview

0-read_textfile.c >> function that reads a text file and prints it to the POSIX standard output.

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-read_textfile.c -o a`

1-create_file.c >> function that creates a file.

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-create_file.c -o b`

2-append_text_to_file.c >> function that appends text at the end of a file.

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-append_text_to_file.c -o c`

3-cp.c >> program that copies the content of a file to another file.

`gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-cp.c -o cp`

## Tests

The tests folder contains the main.c files used to test the functions

## Resouces

#### Read or Watch

[File descriptors](https://en.wikipedia.org/wiki/File_descriptor)

[C Programming in LInux Tutorial - open() read() write() Functions](https://www.youtube.com/watch?v=dP3N8g7h8gY)

#### man or help

`open`
`close`
`read`
`write`
`dprintf`

