#include "monty.h"

/**
 * _push - adds node to the start of a doubly linked
 * list.
 * @head: pointer to head node of doubly linked list.
 * @line_number: bytecode line number.
 * @n: integer.
 * Return: void.
 */
void _push(stack_t **head, unsigned int line_number, const char *n)
{
	if (head == NULL)
		return;
	if (_number_check(n) == -1)
	{
		printf("L%u: usage: push integer\n", line_number);
		_free_linked_list(head);
		exit(EXIT_FAILURE);
	}
	else
	{
		if (_add_nodeint_end(head, atoi(n)) == -1)
		{
			_free_linked_list(head);
			exit(EXIT_FAILURE);
		}
	}
}
