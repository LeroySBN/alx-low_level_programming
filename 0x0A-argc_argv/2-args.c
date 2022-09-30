#include <stdio.h>
#include "main.h"

/**
 * main - prints the program name.
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
			printf("%s\n", argv[count]);
	}

	return (0);
}

