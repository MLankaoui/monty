#include "monty.h"
/**
 * exec__cutee - Execute commands in the Monty bytecode
 * @heea_add: Pointer to the head of the stack
 * @linee: Line containing the command to be executed
 * @len: Length of the line
 *
 * Return: Always 0
 */

int exec__cutee(stack_t **heea_add, char *linee, unsigned int len)
{
	instruction_t fun_c__tions[] = {
	{"push", push}, {"pall", pall},
	{NULL, NULL},
	};

	unsigned int value;
	unsigned int i = 0;
	char *token_z = NULL;

	(void)len;

	token_z = strtok(linee, "\n\t ");
	while (token_z != NULL)
	{
		for (i = 0; fun_c__tions[i].opcode != NULL; i++)
		{
			if (strcmp(token_z, fun_c__tions[i].opcode) == 0)
			{
				token_z = strtok(NULL, "\n\t ");
				if (!token_z)
					token_z = "0";

				value = atoi(token_z);

				fun_c__tions[i].f(heea_add, value);

				break;
			}
		}
		token_z = strtok(NULL, "\n\t ");
	}
	return (0);
}
