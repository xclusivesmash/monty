#include "monty.h"

/**
 * _mul - multiply second node and top node.
 * @head: top node of list.
 * @line_number: line of command
 * Return: void.
 */
void _mul(stack_t **head, unsigned int line_number)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		printf("L%u: can't mul, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	/* MULTIPLICATION PHASE */
	(*head)->next->n = (*head)->next->n * (*head)->n;
	(*head) = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
}
