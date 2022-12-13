# C (programming language)

## Fundamentals
* Types, Variables, Functions >> [0x00-hello_world](./0x00-hello_world)
* Operators, Expressions, Flow Control >> [0x01-variables_if_else_while](./0x01-variables_if_else_while)
* Functions, Nested Loops >> [0x02-functions_nested_loops](./0x02-functions_nested_loops)
* Debugging >> [0x03-debugging](./0x03-debugging)
* More functions, more nested loops >> [0x04-more_functions_nested_loops](./0x04-more_functions_nested_loops)
* Pointers, arrays and strings >> [0x05-pointers_arrays_strings](./0x05-pointers_arrays_strings)
* More pointers, arrays and strings >> [0x06-pointers_arrays_strings](./0x06-pointers_arrays_strings)
* Pointer to pointer, and dimentional arrays >> [0x07-pointers_arrays_strings](./0x07-pointers_arrays_strings)
* Recursion >> [0x08-recursion](./0x08-recursion)
* argc and argv >> [0x0A-argc_argv](./0x0A-argc_argv)
* Static libraries >> [0x09-static_libraries](./0x09-static_libraries)
* Memory allocation (MALLOC) >> [0x0B-malloc_free](./0x0B-malloc_free)
* More malloc, free >> [0x0C-more_malloc_free](./0x0C-more_malloc_free)
* Preprocessor >> [0x0D-preprocessor](./0x0D-preprocessor)
* Structures, typedef >> [0x0E-structures_typedef](./0x0E-structures_typedef)
* Function pointers >> [0x0F-function_pointers](./0x0F-function_pointers)
* Variadic functions >> [0x10-variadic_functions](./0x10-variadic_functions)
* Bit manipulation >> [0x14-bit_manipulation](./0x14-bit_manipulation)
* Dynamic libraries >> [0x18-dynamic_libraries](./0x18-dynamic_libraries)

## Data Structures and Algorithms
* Singly linked lists >> [0x12-singly_linked_lists](./0x12-singly_linked_lists)
* More singly linked lists >> [0x13-more_singly_linked_lists](./0x13-more_singly_linked_lists)
* Doubly linked lists >> [0x17-doubly_linked_lists](./0x17-doubly_linked_lists)

## Linux and Unix system programming
* File I/O >> [0x15-file_io](./0x15-file_io)

## Projects
* [**printf project**](https://github.com/leroysb/printf)
* [**Simple Shell project**](https://github.com/leroysb/simple_shell)

## More Info

### Resources
1. C Programming Languange (ANSI C 2nd Edition) by Brian Kernighan & Dennis Ritchie
2. Programming in C (4th Edition) by Stephen Kochan

### Compiling Syntax
All files to be compiled on Ubuntu 20.04 LTS using gcc tags
`gcc -Wall -Werror -Wextra -pedantic -std=gnu89`

### Betty linter installation guide
1. Go to the [Betty](https://github.com/holbertonschool/Betty) repo and clone to your local machine
2. `cd` into the Betty directory
3. Install the linter with `sudo ./install.sh`
4. Move the [betty](./betty) file into `/bin` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`

You can now type `betty <filename>.c` to run the Betty linter.

