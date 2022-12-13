# Dynamic Libraries

## Resources
1. [What is the difference between Dynamic and Static library (Static and Dynamic linking)](https://www.youtube.com/watch?v=eW5he5uFBNM)
2. [create dynamic libraries on Linux](https://docencia.ac.upc.edu/FIB/USO/Bibliografia/unix-c-libraries.html#creating_shared_library)

## Tasks
### 0. A library is not a luxury but one of the necessities of life
Create the dynamic library libdynamic.so containing all the functions listed below:

`int _putchar(char c);

int _islower(int c);

int _isalpha(int c);

int _abs(int n);

int _isupper(int c);

int _isdigit(int c);

int _strlen(char *s);

void _puts(char *s);

char *_strcpy(char *dest, char *src);

int _atoi(char *s);

char *_strcat(char *dest, char *src);

char *_strncat(char *dest, char *src, int n);

char *_strncpy(char *dest, char *src, int n);

int _strcmp(char *s1, char *s2);

char *_memset(char *s, char b, unsigned int n);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_strchr(char *s, char c);


unsigned int _strspn(char *s, char *accept);

char *_strpbrk(char *s, char *accept);

char *_strstr(char *haystack, char *needle);`

**File**: [libdynamic.so](./libdynamic.so), [main.h](./main.h)

### 1. Without libraries what have we? We have no past and no future
Create a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.

**File**: [1-create_dynamic_lib.sh](./1-create_dynamic_lib.sh)