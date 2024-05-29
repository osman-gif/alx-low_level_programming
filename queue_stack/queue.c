#include <stdlib.h>
#include <stdio.h>

typedef struct queue_list{
	int n;
	struct queue_list *next;
	struct queue_list *prev;
}queue;

queue *add_to_emptylist(queue **head, queue *new)
{
	new->next = NULL;
	new->prev = NULL;
	*head = new;
	return (new);
}
queue *append(queue **head, int n)
{
	int i;
	queue *tmp, *new, *prev, *next;

	new = malloc(sizeof(new));

	if (!new)
		return (NULL);

	new->n = n;
	tmp = *head;

	/* if list is empty, make new the first pointer */
	if (*head == NULL)
	{
		return (add_to_emptylist(head, new));
	}

	/* Traverse the list till the last node added */
	
	for (; tmp->prev; tmp = tmp->prev)
	{
	}

	/* Put the new node at the begining of the list */
	tmp->prev  = new;
	new->next = tmp;
	new->prev = NULL;

	//*head = new;

	return (new);
}
queue *pop(queue **head)
{
	queue *popped;

	/* pop first node */
	popped = (*head);
	*head = (*head)->prev;
	(*head)->next = NULL;

	return (popped);
}

void print_list(queue *head)
{
	queue *tmp;

	while(head)
        {
                printf("new: %d\n", head->n);
                tmp = head;
                head = head->prev;
        }

}
int main()
{
	queue *head, *new, *tmp, *popped;

	head = NULL;
	new = append(&head, 1);
	append(&head, 2);
	append(&head, 3);
	append(&head, 4);
	popped = pop(&head);
	print_list(head);

	return (0);
}
