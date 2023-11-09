#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a listint_t list
 * @head: first node in the list
 * @n: number of the elements
 * Return:  address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(new));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new->next = NULL;
		new->n = n;
		*head = new;
	}
	else
	{
	new->next = (*head);
	new->n = n;
	(*head) = new;
	}
	return (new);
}
