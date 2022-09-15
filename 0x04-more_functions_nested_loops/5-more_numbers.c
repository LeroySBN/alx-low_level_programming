#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers, from 0 to 14.
 * followed by a new line. Does not print 2 and 4.
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}

