#include "monty.h"

/**
 * _pint - print top node in stack.
 * @head: pointer to head node.
 * @line_number: bytecode line number
 * Return: void.
 */
void _pint(stack_t **head, unsigned int line_number)
{
	if (head == NULL || *head == NULL)
	{
		printf("L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
