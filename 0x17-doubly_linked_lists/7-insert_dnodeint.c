
#include "lists.h"
unsigned int dlistlen(dlistint_t *head);

/**
 * insert_dnodeint_at_index - Insert a node at the particular position
 * @head: Pointer to the first node
 * @idx: The position to insert the node
 * @n: Data of the new node
 * Return: Pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
		unsigned int idx, int n)
{
	unsigned int __attribute__((unused)) i, size;
	dlistint_t __attribute__((unused)) *current, *new, *prev, *next;

	size = dlistlen(*head);

	if (idx >= size)
		return (NULL);

	prev = *head;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	if (prev == NULL)
	{
		*head = new;
		new->next = NULL;
	}

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}

	for (i = 0; i < idx - 1; i++)
	{
		prev = prev->next;
	}

	new->n = n;
	new->next = prev->next;
	prev->next = new;

	return (new);
}


/**
 * dlistlen - Calculates the length of a list of type listint_t list
 * @head: first node in the list
 * Return: Return the size of the list
 */
unsigned int dlistlen(dlistint_t *head)
{
	unsigned int i;

	for (i = 0; head != NULL; head = (head)->next)
	{
		i++;
	}
	return (i);
}
