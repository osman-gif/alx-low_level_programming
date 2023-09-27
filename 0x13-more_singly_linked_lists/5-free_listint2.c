#include "lists.h"

/**
 * free_listint2 - Frees a linkedlist of type listint_t and set head to NULL
 * @head: Pointer to the first node in the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	for (; *head != NULL; )
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

}
