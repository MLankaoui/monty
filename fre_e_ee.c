#include "monty.h"
/**
 * free_stackee - Frees a stack.
 * @heea__add: Pointer to the top of the stack.
 */

void free_stackee(stack_tt **heea__add)
{
	stack_tt *tmp = *heea__add;

	while (tmp != NULL)
	{
		stack_tt *tmp2 = tmp->next;

		free(tmp);
		tmp = tmp2;
	}
	*heea__add = NULL;
}
