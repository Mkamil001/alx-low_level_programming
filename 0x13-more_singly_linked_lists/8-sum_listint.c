#include "lists.h"

/**
 * sum_listint - sum all the data of a lsitint_t list
 * @head: the pointer to the beginning of the node
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

