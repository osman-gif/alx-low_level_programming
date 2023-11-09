
#include "lists.h"

/**
 * get_dnodeint_at_index - Picks a particular element
 * from a listint_t linkedlist
 * @head: First node of a listint_t linkedlist
 * @index: Index of the element to be picked
 * Return: Return the index of the element to be picked
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head != NULL; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (NULL);

}

