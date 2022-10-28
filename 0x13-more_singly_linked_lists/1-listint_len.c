#include "lists.h"

/**
 * listint_len - prints the number of elements of a list.
 * @h: head pointer of the list
 *
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t len;

	for (len = 0; h != NULL; len++)
	{
		h = h->next;
	}
	return (len);
}
