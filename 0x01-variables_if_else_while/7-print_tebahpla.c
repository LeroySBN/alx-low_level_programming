#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char lalpha = 'z';

	while (lalpha >= 'a')
	{
		putchar(lalpha);
		lalpha--;
	}

	putchar('\n');
	return (0);
}
