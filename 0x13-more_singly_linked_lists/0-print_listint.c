#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the first node in the list
 * Return: returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	count = 0;
	for (; h != NULL; h = h->next)
	{
		++count;
		printf("%i\n", h->n);
	}

	return (count);
}
