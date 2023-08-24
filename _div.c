#include "monty.h"

/**
 * _div - divide second node from top node.
 * @head: top node of list
 * @line_number: line of command
 * Return: void
 */
void _div(stack_t **head, unsigned int line_number)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		printf("L%u: can't div, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	/* CHECK FOR DIVISION BY ZERO */
	if ((*head)->n == 0 || (*head)->next->n == 0)
	{
		printf("L%u: division by zero\n", line_number);
	}
	/* DIVISION PHASE */
	(*head)->next->n = (*head)->next->n / (*head)->n;
	(*head) = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
}
