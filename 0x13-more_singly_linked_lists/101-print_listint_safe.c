#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t unique_list(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * unique_list - Counts the unique nodes in the listint_t list
 * @head: First pointer to the listint_t list.
 *
 * Return: 0 if failed to looped through list other ways number of unique nodes
 */
size_t unique_list(const listint_t *head)
{
	const listint_t *first, *second;
	size_t count = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	first = head->next;
	second = (first)->next;

	for (; second != NULL; )
	{
		if (first == second)
		{
			first = head;
			while (first != second)
			{
				count++;
				first = first->next;
				second = second->next;
			}
			first = first->next;
			while (first != second)
			{
				count++;
				first = first->next;
			}
			return (count);
		}
		first = first->next;
		second = (second->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: First(head) pointer of the list
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count, index;

	index = 0;

	count = unique_list(head);

	if (count == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			count++;
		}
	}
	else
	{
		for (index = 0; index < count; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (count);
}
