#include "lists.h"
/**
 * sum_dlistint - sum the data of the listint_t linked list
 * @head: Pointer to the first node in the linkedlist
 * Return: Returns the sum of all the data of the linkedlist
 */
int sum_dlistint(dlistint_t *head)
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
