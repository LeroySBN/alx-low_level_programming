#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Frees a linked list
 * @head: pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
	}
}

