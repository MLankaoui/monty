#include "monty.h"
/**
 * free_stackee - Frees a stack.
 * @heea__add: Pointer to the top of the stack.
 */

void free_stackee(stack_t **heea__add)
{
	stack_t *tmp = *heea__add;

	while (tmp != NULL)
	{
		stack_t *tmp2 = tmp->next;

		free(tmp);
		tmp = tmp2;
	}
	*heea__add = NULL;
}
