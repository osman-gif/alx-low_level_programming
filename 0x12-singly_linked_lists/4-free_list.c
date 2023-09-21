#include "lists.h"
/**
 * free_list - frees a linedlist list_t list
 * @head: first node in the list_t list
 */
void free_list(list_t *head)
{
	list_t *ptrtmp;

	for (; head != NULL;)
	{
		ptrtmp = head->next;
		free(head->str);
		free(head);
		head = ptrtmp;
	}
}
