#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: pointer to the head node
 *
 * Return: Head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);
	return (data);
}

