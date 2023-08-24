#include "monty.h"

/**
 * _free_linked_list - frees a doubly linked list.
 * @head: pointer to head node.
 * Return: void.
 */
void _free_linked_list(stack_t **head)
{
	if (*head == NULL)
		return;
	while (*head != NULL && (*head)->next != NULL)
	{
		*head = (*head)->next;
		free((*head)->prev);
	}
	free(*head);
}
