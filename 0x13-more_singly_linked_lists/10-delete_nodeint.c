#include "lists.h"

/**
 * delete_nodeint_at_index - inserts a new node at a given position
 * @head: address of the pointer to the first node
 * @idx: the index of the list where the node need to be deleted
 *
 * Return: 1 if it succeded and -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int idx)
{
	unsigned int i = 0;
	listint_t *temp = *head, *temp1;

	if (*head == NULL)
		return (-1);
	if (idx == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
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
		temp1 = temp->next;
		temp->next = temp1->next;
		free(temp1);
	}
	else
		return (-1);

	return (1);
}

