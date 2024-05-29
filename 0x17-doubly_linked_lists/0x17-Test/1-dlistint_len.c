#include "lists.h"

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	if (!h)
		return 0;

	count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return count;
}
