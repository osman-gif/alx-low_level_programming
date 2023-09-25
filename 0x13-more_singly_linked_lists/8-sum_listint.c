#include "lists.h"

int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	for (sum = 0; head != NULL; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}
