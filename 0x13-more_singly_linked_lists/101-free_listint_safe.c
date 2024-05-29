#include "lists.h"
size_t free_listint(listint_t *head)
{
    listint_t temp;
    size_t count;

    count = 0;

    while (head != NULL)
    {
	count++;
        temp = head;
        head = head->next;
        free(temp);
    }
    return (count);
}
