#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: First node in the dlistint_t list
 * Return: return number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count;

	if (!h)
		return (0);
	count = 0;
	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
