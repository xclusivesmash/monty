#include "monty.h"

/**
 * _add_nodeint_end - adds a node at the beginning of a
 * doubly linked list.
 * @head: address of pointer to head node.
 * @n: input integer.
 * Return: exit status.
 */
int _add_nodeint_end(stack_t **head, int n)
{
	stack_t *new = NULL;

	if (head == NULL)
		return (-1);
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed");
		return (-1);
	}
	new->n = n;
	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
	}
	else
	{
		new->next = *head;
		(*head)->prev = new;
		*head = new;
	}
	return (0);
}
