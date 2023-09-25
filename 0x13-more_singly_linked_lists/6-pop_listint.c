#include "lists.h"

/**
 * pop_listint - Deletes head node of listint_t linkedlist
 * @head: Pointer to the first node of the listint_t list
 * Return: Returns the head's node data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL)
		return (0);
	tmp = (*head)->next;
	data = (*head)->n;

	free(*head);
	(*head) = tmp;

	return (data);
}
