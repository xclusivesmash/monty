#include "monty.h"

/**
* read_file - reads contents of a file.
* @filename: name of file.
* @buff: array of chars.
* Return: buffer with contents of filename.
*/
int _read_file(char *filename, char **buff)
{
	ssize_t bytes_;
	int fd;

	/* OPEN THE FILE */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		close(fd);
		return (EXIT_FAILURE);
	}
	/* READ FILE CONTENTS */
	bytes_ = read(fd, *buff, BUFF_SIZE);
	if (bytes_ == -1)
	{ /* FREE BUFFER AND CLOSE FD */
		free(buff);
		close(fd);
		return (EXIT_FAILURE);
	}
	/* CLOSE THE FILE */
	close(fd);
	return (EXIT_SUCCESS);
}
