#include "monty.h"

/**
 * _pop - removes node at front of doubly linked list.
 * @head: pointer to head node.
 * @line_number: bytecode line number
 * Return: void.
 */
void _pop(stack_t **head, unsigned int line_number)
{
	if (head == NULL || *head == NULL)
	{
		printf("L%u: can't pop an empty stack\n", line_number);
		_free_linked_list(head);
		exit(EXIT_FAILURE);
	}
	else /* DELETE NODE AT END */
		_delete_node_end(head);
}
