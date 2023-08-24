#include "monty.h"

/**
 * _number_check - checks if number is digit.
 * @n: input integer.
 * Return: 0 if is number, otherwise 1.
 */
int _number_check(const char *n)
{
	int i;

	i = 0;
	/* CHECK IF NUMBER IS < 0 */
	if (*n == '-')
		i = 1;
	while (n[i] != '\0')
	{
		if (_isdigit(n[i]) == 0)
			return (-1);
		i = i + 1;
	}
	return (0);
}
