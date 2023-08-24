#include "monty.h"

/**
 * _pall - print all nodes in stack.
 * @head: pointer to head node.
 * @line_number: bytecode line number
 * Return: void
 */
void _pall(stack_t **head, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (head == NULL || *head == NULL)
		return;

	(void) line_number;
	tmp = *head;
	/* LOOP THROUGH COPY OF LINKED LIST */
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
