#include "monty.h"

/**
* read_geet_linee - Custom implementation of getline function.
* @line__buff: Pointer to the buffer storing the input line.
* @bsize: Pointer to the size of the buffer.
* @input_str_eam: File stream to read from.
*
* Return: The number of characters read, or -1 on failure.
*/
int read_geet_linee(char **line__buff, size_t *bsize, FILE *input_str_eam)
{
	int br = 0, chr;

	size_t total_br = 0;
	char *newLine__buff;

	if (line__buff == NULL || bsize == NULL || input_str_eam == NULL)
		return (-1);
	if (*line__buff == NULL || *bsize == 0)
	{
		*bsize = 128;
		*line__buff = (char *)malloc(*bsize);
		if (*line__buff == NULL)
			return (-1);
	}
	while ((chr = fgetc(input_str_eam)) != EOF)
	{
		if (total_br >= *bsize - 1)
		{
			*bsize *= 2;
			newLine__buff = (char *)realloc(*line__buff, *bsize);
			if (newLine__buff == NULL)
			{
				free(*line__buff);
				return (-1);
			}
			*line__buff = newLine__buff;
		}
		(*line__buff)[total_br++] = (char)chr;
		br++;
		if (chr == '\n')
			break;
	}
	if (total_br == 0 && br == 0)
	{
		free(*line__buff);
		return (-1);
	}
	(*line__buff)[total_br] = '\0';
	return (total_br);
}