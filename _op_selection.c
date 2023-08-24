#include "monty.h"

/**
 * _op_selection - function to select correct operation function.
 * @token: opcode.
 * Return: pointer to correct operation function.
 */
void (*_op_selection(char *token))(stack_t **stack, unsigned int line_number)
{
	instruction_t instruction_s[] = {
		{"pop", _pop},
		{"pall", _pall},
		{"pint", _pint},
		{"swap", _swap},
		{"add", _add},
		{"sub", _sub},
		{"mul", _mul},
		{"div", _div},
		{"mod", _mod},
		{"pchar", _pchar},
		{"pstr", _pstr},
		{"nop", _nop},
		{"rotl", _rotl},
		{"rotr", _rotr},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (instruction_s[i].f != NULL)
	{
		if (strcmp(token, instruction_s[i].opcode) == 0)
			return (instruction_s[i].f);
		i = i + 1;
	}
	return (NULL);
}
