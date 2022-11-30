#include "lists.h"

/**
 * add_nodeint - adds anew node at the beginning of a listint_t list
 * @head: address of the pointer to the first node
 * @n: what to add at the beginning
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

