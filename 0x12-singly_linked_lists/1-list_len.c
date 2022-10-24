#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to linked list
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	size_t len;

	for (len = 0; h; len++)
		h = h->next;
	return (len);
}

