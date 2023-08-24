#include "monty.h"

/**
 * _delete_node_end - deletes node at end of doubly linked list.
 * @head: pointer to head node of doubly linked list.
 */
void _delete_node_end(stack_t **head)
{
	stack_t *temp = NULL;

	temp = *head;
	if ((*head)->next == NULL)
	{
		*head = NULL;
		free(temp);
	}
	else
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(temp);
	}
}
