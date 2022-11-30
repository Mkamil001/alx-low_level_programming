#include "lists.h"

/**
 * listint_len - get the number of elements in a linked listint_t list
 * @h: pointer to the first node
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t count = 0;

	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

