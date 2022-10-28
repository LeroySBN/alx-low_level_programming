#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head pointer of the list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t len;

	for (len = 0; h != NULL; len++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (len);
}
