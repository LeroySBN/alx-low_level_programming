#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int x;
	char y;

	for (x = 48; x < 58; x++)
		putchar(x);
	for (y = 'a'; y <= 'f'; y++)
		putchar(y);

	putchar('\n');
	return (0);
}
