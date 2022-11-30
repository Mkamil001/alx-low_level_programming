#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: the address of the pointer to the first node
 *
 * Return: the data of the head node popped out
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);
	n = temp->n;
	*head = (*head)->next;
	free(temp);
	return (n);
}

