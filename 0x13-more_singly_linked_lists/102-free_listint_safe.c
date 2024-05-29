#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **head)
{
	size_t len;
	listint_t *temp;

	len = 0;

	if (head != NULL || *head != NULL)
		return (0);

	while (*head != NULL)
	{
		if (((*head)->next - *head) > 0)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			len++;
		}
		else
		{
			free(*head);
			*head = NULL;
			len++;
			break;
		}
	}

	*head = NULL;

	return (len);
}
