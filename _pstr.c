#include "monty.h"

/**
 * _pstr - print top nodes in stack as ascii letter.
 * @head: head node of list.
 * @line_number: bytecode line number.
 * Return: void.
 */
void _pstr(stack_t **head, unsigned int line_number)
{
	stack_t *tmp;

	if (head == NULL || *head == NULL)
	{
		printf("L%u: can't pchar, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = *head;
	while ((tmp != NULL) && (tmp->n != 0) &&
	       (tmp->n >= 0) && (tmp->n <= 127))
	{
		printf("%c", (tmp)->n);
		tmp = tmp->next;
	}
	printf("\n");
}
