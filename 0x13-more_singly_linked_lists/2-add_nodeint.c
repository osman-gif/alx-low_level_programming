#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: first node in the list
 * @n: number of the elements
 * Return:  address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(new));
	if (new == NULL)
		return (NULL);
	new->next = (*head);
	(*head)->prev = new;
	new->prev = NULL;
	new->n = n;
	(*head) = new;
	return (new);
}
