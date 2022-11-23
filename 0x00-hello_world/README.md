# Tasks

## 0.Preprocessor >> [0-preprocessor](./0-preprocessor)

Script that runs a C file through the preprocessor and save the result into another file.

* The C file name will be saved in the variable `$CFILE`

`export CFILE=main.c`

* The output should be saved in the file `c`

## 1. Compiler >> [1-compiler](./1-compiler)

Script that compiles a C file but does not link.

* The C file name will be saved in the variable `$CFILE`

* The output file should be named the same as the C file, but with the extension `.o` instead of `.c`

## 2. Assembler >> [2-assembler](./2-assembler)

Script that generates the assembly code of a C code and save it in an output file.

* The C file name will be saved in the variable `$CFILE`

* The output file should be named the same as the C file, but with the extension `.s` instead of `.c`

## 3. Name >> [3-name](./3-name)

Script that compiles a C file and creates an executable named `cisfun`.

* The C file name will be saved in the variable `$CFILE`

## 4. Hello, puts >> [4-puts.c](./4-puts.c)

C program that prints exactly` "Programming is like building a multilingual puzzle`, followed by a new line.

* Use the function `puts`

* You are not allowed to use `printf`

* Program should end with the value `0`

## 5. Hello, printf >> [5-printf.c](./5-printf.c)

C program that prints exactly `with proper grammar, but the outcome is a piece of art`, followed by a new line.

* Use the function `printf`

* You are not allowed to use the function `puts`

* Your program should return `0`

* Your program should compile without warning when using the `-Wall gcc` option

## 6. Size is not grandeur, and territory does not make a nation >> [6-size.c](./6-size.c)

C program that prints the size of various types on the computer it is compiled and run on.

* You should produce the exact same output as in the example

* Warnings are allowed

* Your program should return `0`

* You might have to install the package `libc6-dev-i386` on your Linux to test the `-m32 gcc` option

7. Intel >> [100-intel](./100-intel)

Script that generates the assembly code (Intel syntax) of a C code and save it in an output file.

* The C file name will be saved in the variable `$CFILE`

* The output file should be named the same as the C file, but with the extension `.s` instead of `.c`

## 8. UNIX is basicallly a simple operating system, but you have to be a genius to understand the simplicity >> [101-quote.c](./101-quote.c)

C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.

* You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`

* Your program should return 1

* Your program should compile without any warnings when using the `-Wall gcc` option

