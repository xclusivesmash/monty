#include "monty.h"

/**
 * _token_check - checks each token from buffer.
 * @buffer: input buffer.
 * Return: exit status.
 */
int _token_check(char **buff)
{
	stack_t *head = NULL;
	char *token = NULL;
	int check = 0;
	unsigned int line_track = 1;

	token = strtok(*buff, "\n\t\a\r ;:");
	while (token != NULL)
	{
		if (check == 1)
		{
			_push(&head, line_track, token);
			check = 0;
			token = strtok(NULL, "\n\t\a\r ;:");
			line_track = line_track + 1;
			continue;
		}
		else if (strcmp(token, "push") == 0)
		{
			check = 1;
			token = strtok(NULL, "\n\t\a\r ;:");
			continue;
		}
		else
		{
			if (_op_selection(token) != 0)
				_op_selection(token)(&head, line_track);
			else
			{
				_free_linked_list(&head);
				printf("L%d: unknown instruction %s\n", line_track, token);
				exit(EXIT_FAILURE);
			}
		}
		line_track = line_track + 1;
		token = strtok(NULL, "\n\t\a\r ;:");
	}
	free(*buff);
	_free_linked_list(&head);
	return (0);
}

