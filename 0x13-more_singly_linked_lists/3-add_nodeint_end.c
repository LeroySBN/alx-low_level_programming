#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a list.
 * @head: double pointer of the linked list
 * @n: element to add
 *
 * Return: Success (new element's address) Fail (NULL)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	/* allocate memory for new node */
	new_node = malloc(sizeof(listint_t));

	/* if element to be added is blank, exit */
	if (new_node == NULL)
		return (NULL);

	/* initialize new node */
	new_node->n = n;
	new_node->next = NULL;

	/* if head is the only node, assign first node as head */
	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}

