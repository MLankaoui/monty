#include "monty.h"

/**
 * read_geet_linee - Reads a line from a file descriptor
 * @buf_fer: Pointer to a buffer where the line will be stored
 * @len: Pointer to an integer to store the length of the line
 * @file: File descriptor
 * @linee: Pointer to an unsigned int to store the line number
 *
 * Return: The number of characters read, or -1 on failure.
 */
int read_geet_linee(char **buf_fer, int *len, int file, unsigned int *linee)
{
	ssize_t bytes_read = 0, i = 0, j = 0;
	char local_buffer[1024];

	while ((bytes_read = read(file, local_buffer, sizeof(local_buffer) - 1)) > 0)
	{
		for (i = 0; i < bytes_read; i++)
		{
			if (local_buffer[i] == '\n')
			{
				if ((*buf_fer) != NULL)
					free(*buf_fer);
				*buf_fer = malloc(i + 2);
				if (!(*buf_fer))
				{
					_puts("Error: malloc failed\n", 2);
					return (1);
				}
				for (j = 0; j < i + 1; j++)
					(*buf_fer)[j] = local_buffer[j];
				(*buf_fer)[j] = '\0';
				*len = (int)j, *linee = *linee + 1;
				lseek(file, i - (bytes_read - 1), SEEK_CUR);
				return (i);
			}
		}
		if ((*buf_fer))
			free(*buf_fer);
		*buf_fer = malloc(bytes_read + 1);
		if (!(*buf_fer))
		{
			_puts("Error: malloc failed\n", 2);
			return (1);
		}
		for (j = 0; j < bytes_read; j++)
			(*buf_fer)[j] = local_buffer[j];
		(*buf_fer)[j] = '\0';
		*len = (int)j, *linee = *linee + 1;
		return (j);
	}
	return ((bytes_read) == 0 ? -1 : 0);
}
