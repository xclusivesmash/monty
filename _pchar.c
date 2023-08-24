#include "monty.h"

/**
 * _pchar - print top node in stack as ascii letter.
 * @head: head node of list.
 * @line_number: bytecode line number.
 * Return: void.
 */
void _pchar(stack_t **head, unsigned int line_number)
{
	if (head == NULL || *head == NULL)
	{
		printf("L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	if (((*head)->n) >= 0 && ((*head)->n) <= 127)
		printf("%c\n", (*head)->n);
	else
	{ /* NO ASCII VALUE FOR INT */
		printf("L%u: can't pchar, value out of range\n", line_number);
		exit(EXIT_FAILURE);
	}
}
