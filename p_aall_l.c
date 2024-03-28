#include "monty.h"

/**
 * pall - prints all the values on the stack, starting from the top.
 * @heaa__d: double pointer to the stack's head.
 * @valu__ee: Value of the opcode in the Monty file.
 */

void pall(stack_t **heaa__d, unsigned int valu__ee)
{
	stack_t *curr_eent = *heaa__d;
	(void)valu__ee;

	while(curr_eent)
	{
        printf("%d\n", curr_eent->n);
        curr_eent = curr_eent->next;
    }
}
