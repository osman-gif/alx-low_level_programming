
#include "lists.h"
unsigned int dlistlen(dlistint_t *head);
dlistint_t *at_begining(dlistint_t *head, dlistint_t *new);
dlistint_t *at_index(dlistint_t *head);
dlistint_t *at_ending(dlistint_t *head, dlistint_t *new);
dlistint_t *insert_in_empty_list(dlistint_t *head, dlistint_t *new);

/**
 * insert_in_empty_list - Inserts a node in an empty list
 * @head: First node in the list
 * @new: Node to be inserted
 * Return: Returns the new node
 */

dlistint_t *insert_in_empty_list(dlistint_t *head, dlistint_t *new)
{
	new->next = NULL;
	new->prev = NULL;
	head = new;
	return (head);
}

/**
 * *at_ending - Inserts a node in an empty list
 * @head: First node in the list
 * @new: Node to be inserted
 * Return: Returns the new node
 */

dlistint_t *at_ending(dlistint_t *head, dlistint_t *new)
{
	dlistint_t *last, *next;

	for (last = head; last->next != NULL; last = last->next)
	{
	}
	next = NULL;
	new->prev = last;
	new->next = next;
	last->next = new;
	return (new);

}

/**
 * *at_begining - Inserts a node in an empty list
 * @head: First node in the list
 * @new: Node to be inserted
 * Return: Returns the new node
 */

dlistint_t *at_begining(dlistint_t *head, dlistint_t *new)
{
	dlistint_t *prev, *next;

	/* INSERT AT BEGINING */
	prev = NULL;
	next = head;
	if (head->prev == NULL)
	{
	new->next = next;
	new->prev = prev;
	next->prev = new;
	head = new;
	}
	else
		return (NULL);
	return (new);
}
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
	unsigned int size, i;
	dlistint_t *new, *prev, *next, *tmp;

	size = dlistlen(*head);
	new = malloc(sizeof(new));
	new->n = n;
	if (new == NULL)
		return (NULL);

	if (*head == NULL && idx == 0)
	{
		insert_in_empty_list(*head, new);
	}
	if ((*head == NULL && idx != 0) || idx > size)
		return (NULL);
	else if (idx == size - size)
	{
		at_begining(*head, new);
	}
	/* INSERT AT ENDING */
	else if (idx == size)
	{
		at_ending(*head, new);
	}
	/* INSERT AT INDEX */
	else if (idx > 0 && idx < size)
	{
		tmp = *head;
		for (i = 0; i < idx; i++)
		{
			tmp = tmp->next;
		}
		prev = tmp->prev;
		next = tmp;
		new->next = next;
		new->prev = prev;
		prev->next = new;
		next->prev = new;
	}
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
