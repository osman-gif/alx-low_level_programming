#include "lists.h"

/**
 * free_dlistint - frees a linedlist dlistint_t list
 * @head: first node in the list_t list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptrtmp;

	for (; head != NULL;)
	{
		ptrtmp = head->next;
		free(head);
		head = ptrtmp;
	}

}
