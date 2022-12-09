#include "lists.h"

/**
 * get_dnodeint_at_index - finds the nth node of a doubly linked list
 * @head: pointer to head node
 * @index: node index to be found
 *
 * Return: address of the new element
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp->next != NULL)
	{
		if (n == index)
		{
			return (temp);
			exit(0);
		}
		temp = temp->next;
		n++;
	}
	return (NULL);
}

