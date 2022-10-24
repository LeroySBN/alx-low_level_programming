#include "lists.h"

/**
 * print_list - Prints all the elements of a list
 * @h: pointer to linked list
 *
 * Return: number of nodes in linked list
 */
size_t print_list(const list_t *h)
{
	size_t num;

	for (num = 0; h; num++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (num);
}
