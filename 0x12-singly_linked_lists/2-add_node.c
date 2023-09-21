#include "lists.h"
#include <string.h>
/**
 * add_node - Adds a node at the begining
 * @head: pointer to the head node pointer(first pointer)
 * @str: data sring of the new node
 * Return: Returns a pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newptr;
	unsigned int str_len;
	char *s;

	str_len = 0;
	newptr = malloc(sizeof(newptr));
	if (newptr == NULL)
		return (NULL);
	s = strdup(str);
	newptr->str = strdup(str);
	while (*s++)
	{
		str_len++;
	}
	newptr->len = str_len;
	newptr->next = (*head);
	(*head) = newptr;
	if (newptr == NULL)
		return (NULL);
	else
		return (newptr);
}
