#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: address of the pointer to the first node
 * @idx: the index of the list where the new node should be added
 * @n: number to be added
 *
 * Return: the address of the new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (i < idx - 1)
	{
		if (temp->next != NULL)
			temp = temp->next;
		else
			break;
		i++;
	}
	if (i == idx - 1)
	{
		new->next = temp->next;
		temp->next = new;
	}
	else
		return (NULL);

	return (new);
}

