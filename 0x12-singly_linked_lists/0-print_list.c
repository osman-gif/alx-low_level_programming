#include "lists.h"
/**
 * print_list - prints the elements of the list list_t *h
 * @h: pointer of type list_t
 * Return: Returns the size of the list
 */
size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	for (; h != NULL; h = h->next)
	{
		++count;
		printf("[%i] ", h->len);
		if (h->str == NULL)
		{
			printf("(nil)\n");
		}
		else
			printf("%s\n", h->str);
	}

	return (count);
}
