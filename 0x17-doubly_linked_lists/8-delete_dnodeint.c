#include "lists.h"

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

/**
 * delete_dnodeint_at_index - Deletes a node at a specifc index
 * @head: pointer to the first node in the listint_t linkedlist
 * @index: The index at which the node will be deleted
 * Return: Returns 1 on success -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t __attribute__((unused)) *current, *prev, *next;
	unsigned int __attribute__((unused)) i, size;

	prev = (*head);
	size = dlistlen(*head);

	if (prev == NULL || index >= size)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = prev->next;
		free(prev);
		return (1);
	}
	if (index > 0)
	{
		for (i = 0; i < index - 1 && prev != NULL; i++, prev = prev->next)
		{
		}
		current = prev->next;
		if (current->next == NULL)
		{
			prev->next = NULL;
			free(current);
			return (1);
		}
		next = current->next;
		prev->next = next;
		free(current);
	}

	return (1);
}

