#include "main.h"

int _putchar(char c);
/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @s: string pointer to print
 */
void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

