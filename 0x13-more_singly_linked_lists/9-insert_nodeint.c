#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to node
 * @idx: index to insert the node
 * @n: new node data
 *
 * Return: the address of newNode or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new, *temp;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	temp = *head;
	while (i < (idx - 1))
	{
		temp = temp->next;
		i++;

		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
