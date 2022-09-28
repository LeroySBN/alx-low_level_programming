#include "main.h"
/**
* print_alphabet - prints alphabet followed by a new line
*
* Return: void
*/
void print_alphabet(void)
{
	char chr;
	chr = 'a';

	while (chr <= 'z')
	{
		_putchar(chr);
		chr++;
	}
	_putchar('\n');
}
