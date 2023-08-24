#include "monty.h"

/**
 * _sub - subtract second node from top node.
 * @head: pointer to head.
 * @line_number: line of command
 * Return: void.
 */
void _sub(stack_t **head, unsigned int line_number)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		printf("L%u: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	/* SUBTRACTION PHASE */
	(*head)->next->n = (*head)->next->n - (*head)->n;
	(*head) = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
}
