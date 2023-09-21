#include "lists.h"
/**
 * add_node_end - Adds a node to the end of the list
 * @head: First node in the list
 * @str: The data part of the node (*head)->str
 * Return: Returns the address of the newly added node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp_node;
	unsigned int str_len;
	char *s;

	str_len = 0;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	s = strdup(str);
	if (s == NULL)
		s = "(nil)";
	new_node->str = s;
	new_node->next = NULL;
	while (*s++)
	{
		str_len++;
	}
	new_node->len = str_len;
	/* if the list is empty*/
	/* then make the new node the first node in the list*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	tmp_node = *head;
	while (tmp_node->next != NULL)
	{
		tmp_node = tmp_node->next;
	}
	tmp_node->next = new_node;
	return (new_node);
}
