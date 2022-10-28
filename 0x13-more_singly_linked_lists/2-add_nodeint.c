#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a list.
 * @head: double pointer of the linked list
 * @n: element to be add
 *
 * Return: Success (new element's address) Fail (NULL)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	/* if head pointer is null, exit */
	if (head == NULL)
		return (NULL);
	/* allocate memory for new node */
	new_node = malloc(sizeof(listint_t));

	/* if element to be added is blank, exit */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
