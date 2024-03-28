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
	int fd = 0, read_bytes = 0, len = 0, valid = 0;
	unsigned int line = 0;
	char *buffer = NULL;
	stack_t *head = NULL;

	if (ac != 2)
	{
		_puts("USAGE: monty file\n", 2);
		exit(EXIT_FAILURE);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		_puts("Error: Can't open file ", 2);
		_puts(av[1], 2);
		_putchar('\n', 2);
		exit(EXIT_FAILURE);
	}
	while ((read_bytes = _getline(&buffer, &len, fd, &line)) != -1)
	{
		valid = is_buffer_valid(buffer);
		if (valid == -1)
			continue;
		check_cmd(buffer, line, &head);
	}
	if (buffer)
		free(buffer);
	free_stack(head);
	close(fd);
	return (0);
}
