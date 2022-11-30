#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: the pointer to the first node
 *
 * Return: none
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	if (head->next != NULL)
		free_listint(head->next);
	free(head);
}

