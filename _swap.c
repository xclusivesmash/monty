#include "monty.h"

/**
 * _swap - swap locations of previous stack with the top stack.
 * @head: pointer to head node.
 * @line_number: node number.
 * Return: void.`
 */
void _swap(stack_t **head, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (*head == NULL || (*head)->next == NULL)
	{
		printf("L%u: can't swap, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}
	tmp = (*head)->next;
	if (tmp->next != NULL)
	{
		(*head)->next = tmp->next;
		(*head)->next->prev = *head;

	}
	else
	{
		tmp->prev->prev = tmp;
		tmp->prev->next = NULL;
	}
	/* LINK NODES BACK */
	tmp->prev = NULL;
	tmp->next = *head;
	(*head) = tmp;
}
