#include "monty.h"

/**
 * _add - adds the top two elements in stack.
 * @head: pointer to head node.
 * @line_number: node number.
 * Return: void
 */
void _add(stack_t **head, unsigned int line_number)
{
	if (*head == NULL || (*head)->next == NULL)
	{
		printf("L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	/* ADDITION PHASE */
	(*head)->next->n = (*head)->next->n + (*head)->n;
	(*head) = (*head)->next;
	free((*head)->prev);
	(*head)->prev = NULL;
}
