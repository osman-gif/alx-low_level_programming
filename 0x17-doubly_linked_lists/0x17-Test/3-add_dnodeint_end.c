#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *tmp_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	tmp_node = *head;
	while (tmp_node->next != NULL)
	{
		tmp_node = tmp_node->next;
	}
	tmp_node->next = new_node;
	return (new_node);
}
