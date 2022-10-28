#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Frees a linked list
 * @head: pointer to the first node
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

