#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list
 * @h: pointer to linked list
 *
 * Return: number of nodes in linked list
 */
size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		len++;
	}

	return (len);
}

