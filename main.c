#include "monty.h"

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Argument vector
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */

int main(int argc, char **argv)
{
	const char *filename;
	int resu__ullt;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	filename = argv[1];
	resu__ullt = process_file(filename);

	return (resu__ullt);
}
/**
 * process - Process file
 * @filename: Name of the file to process
 *
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */

int process_file(const char *filename)
{
	FILE *file;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;
	char *line_copy;
	int result;
	unsigned int lens = 0;
	stack_t *head = NULL;

	file = fopen(filename, "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		return (EXIT_FAILURE);
	}

	while ((read = read_geet_linee(&line, &len, file)) != -1)
	{
		lens++;
		line_copy = strdup(line);
		if (line_copy == NULL)
		{
			fprintf(stderr, "Error: Memory allocation failed\n");
			fre__ee(&head);
			fclose(file);
			free(line);
			return (EXIT_FAILURE);
		}

		if (line_copy[0] != '#')
		{
			result = exec__cuu__uuutee(&head, line_copy, lens);
		}

		if (result == -1)
		{
			fprintf(stderr, "L%d: Unknown instruction %s", lens, line_copy);
			free(line_copy);
			fre__ee(&head);
			fclose(file);
			free(line);
			return (EXIT_FAILURE);
		}

		free(line_copy);
	}

	fre__ee(&head);
	fclose(file);
	free(line);

	return (EXIT_SUCCESS);
}