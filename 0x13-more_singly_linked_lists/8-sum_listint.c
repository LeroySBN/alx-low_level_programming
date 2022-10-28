#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - gets the sum of all the data on a linked list
 * @head: pointer to the first node
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
