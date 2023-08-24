#include "monty.h"

/**
 * _rotr - rotate so only bottom node of stack becomes first one.
 * @head: node to be rotated.
 * @line_number: node number.
 * Return: void
 */
void _rotr(stack_t **head, unsigned int line_number)
{
	stack_t *tmp;
	(void) line_number;

	if ((*head)->next != NULL)
	{
		tmp = *head;
		/* LOOP THROUGH LIST */
		while (tmp->next != NULL)
			tmp = tmp->next;
		(*head)->prev = tmp;
		tmp->next = *head;
		tmp->prev->next = NULL;
		tmp->prev = NULL;
		(*head) = (*head)->prev;
	}
}
