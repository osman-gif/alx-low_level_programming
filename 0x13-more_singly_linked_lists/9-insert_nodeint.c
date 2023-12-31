#include "lists.h"
unsigned int listlen(listint_t *head);

/**
 * insert_nodeint_at_index - Insert a node at the particular position
 * @head: Pointer to the first node
 * @idx: The position to insert the node
 * @n: Data of the new node
 * Return: Pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int __attribute__((unused)) i, size;
	listint_t __attribute__((unused)) *current, *new, *prev, *next;

	size = listlen(*head);

	if (idx >= size)
		return (NULL);

	prev = *head;

	new = malloc(sizeof(listint_t));

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
 * listlen - Calculates the length of a list of type listint_t list
 * @head: first node in the list
 * Return: Return the size of the list
 */
unsigned int listlen(listint_t *head)
{
	unsigned int i;

	for (i = 0; head != NULL; head = (head)->next)
	{
		i++;
	}
	return (i);
}
