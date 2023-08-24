#include "monty.h"

/**
 * _rotl - rotate so top of stack becomes last one, second becomes first one.
 * @head: node to be rotated.
 * @line_number: node number.
 * Return: void.
 */
void _rotl(stack_t **head, unsigned int line_number)
{
	stack_t *tmp;
	(void) line_number;

	/* LOOP THROUGH LIST */
	if ((*head)->next != NULL)
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		(*head)->prev = tmp;
		tmp->next = *head;
		(*head)->next->prev = NULL;
		*head = (*head)->next;
		tmp->next->next = NULL;
	}
}
