#include "monty.h"

int exec__cuu__uuutee(stack_t **head, char *line, unsigned int len)
{
    instruction_t fun__ccc__tions[] = {
        {"push", push}, {"pall", pall},
        {NULL, NULL},
	};

	unsigned int value;
	unsigned int i = 0;
	char *token_z = NULL;

	(void)len;

	token_z = strtok(line, "\n\t ");
	while (token_z != NULL)
	{
		for (i = 0; fun__ccc__tions[i].opcode != NULL; i++)
		{
			if (strcmp(token_z, fun__ccc__tions[i].opcode) == 0)
			{
				token_z = strtok(NULL, "\n\t ");
				if (!token_z)
					token_z = "0";

				value = atoi(token_z);

				fun__ccc__tions[i].f(head, value);

				break;
			}
		}
		token_z = strtok(NULL, "\n\t ");
	}
    return (0);
}