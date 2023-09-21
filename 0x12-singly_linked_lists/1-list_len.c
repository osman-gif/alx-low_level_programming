#include "lists.h"
/**
 * list_len - calculates the number of elements in a list
 * @h: node of type struct list_s that consist of
 * char *str, unsigned int len and struct list_s *next pinter
 * Return: returns the size of the list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	for ( ; h != NULL; h = h->next)
		count++;
	return (count);
}

