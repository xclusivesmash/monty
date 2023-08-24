#include "monty.h"

/**
 * main - interprets monty bytecodes.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: exit status based on code execution.
 */
int main(int argc, char **argv)
{
	char *filename, *buffer = NULL;

	/* INPUT CHECK */
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	filename = argv[1];
	/* RESIZE BUFFER */
	buffer = malloc(sizeof(char) * BUFF_SIZE);
	if (buffer == NULL)
		return (EXIT_FAILURE);
	/* READ FORM THE FILE DESCRIPTOR */
	_read_file(filename, &buffer);
	_token_check(&buffer);
	return (EXIT_SUCCESS);
}
