#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of a listint_t list
 * @head: pointer to the first node
 * @index: the index of the node to get
 *
 * Return: the node or NULL if it doesnt exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *value = head;

	while (i < index)
	{
		if (head->next != NULL)
		{
			head = head->next;
			value = head;
		}
		else
			return (NULL);
		i++;
	}
	return (value);
}

