#include "main.h"
/**
* print_alphabet_x10 - prints the alphabet in lowercase 10 times
*
* Return: void
*/
void print_alphabet_x10(void)
{
char chr;
int i;
i = 0;
while (i < 10)
{
chr = 'a';
while (chr <= 'z')
{
_putchar(chr);
chr++;
}
_putchar('\n');
i++;
}
}
