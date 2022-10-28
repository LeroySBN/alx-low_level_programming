#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the nth node
 * @head: pointer to the head node
 * @index: node index to locate
 *
 * Return: Success (nth node value), Fail (NULL)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i < index && head != NULL)
	{
		head = head->next;
		i++;
	}

	if (i == index)
		return (head);

	return (NULL);
}

