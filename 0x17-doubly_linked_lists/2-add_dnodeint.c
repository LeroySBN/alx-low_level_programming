#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of the doubly linked list
 * @head: pointer to head node
 * @n: int to be added
 *
 * Return: address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}

