#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, mark;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		mark = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				mark = 1;
			}
		}
		if (mark == 0)
			return (k);
	}
	return (0);
}

