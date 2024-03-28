#include "monty.h"

int is_buffer_valid(char *buffer)
{
    int i = 0;

	if (buffer[0] == '\n' || buffer[0] == '#')
		return (-1);
	while (buffer[i])/**/
	{
		if (buffer[i] != 32 && buffer[i] != 9 && buffer[i] != '\n')
		{
			if (buffer[i] == '#')
				return (-1);
			return (0);
		}
		i++;
	}
	return (-1);
}


/**
 * check_cmd - Parse and execute commands from the buffer
 * @buffer: Buffer containing commands
 * @line_number: Current line number
 * @head: Pointer to the head of the stack
 */
void check_cmd(char *buffer, unsigned int line_number, stack_t **head)
{
    char *token;
    
    /* Tokenize the buffer to separate commands */
    token = strtok(buffer, " \n\t");
    while (token != NULL)
    {
        /* Here, you would check each token (command) and execute accordingly */
        if (strcmp(token, "push") == 0)
        {
            /* If the command is "push", you would extract the value and push it onto the stack */
            token = strtok(NULL, " \n\t");
            if (token == NULL)
            {
                /* Handle error: No value provided for push */
                fprintf(stderr, "L%u: usage: push integer\n", line_number);
                exit(EXIT_FAILURE);
            }
            /* Convert the token to an integer and push onto the stack */
            push(head, atoi(token));
        }
        else if (strcmp(token, "pall") == 0)
        {
            /* If the command is "pall", you would print all elements in the stack */
            pall(head, line_number);
        }
        /* Add more conditions to handle other commands */
        else
        {
            /* Handle error: Unknown command */
            fprintf(stderr, "L%u: unknown instruction %s\n", line_number, token);
            exit(EXIT_FAILURE);
        }
        
        /* Move to the next token */
        token = strtok(NULL, " \n\t");
    }
}


/**
 * _putchar - print character to file descriptor.
 *
 * @c: character.
 * @fd: file descriptor.
 *
 * Return: length.
 */
int _putchar(char c, int fd)
{
	return (write(fd, &c, 1));
}
/**
 * _puts - print string to file descriptor.
 *
 * @str: string.
 * @fd: file descriptor.
 *
 * Return: length.
 */
int _puts(char *str, int fd)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i], fd);
		i++;
	}
	return (i);
}