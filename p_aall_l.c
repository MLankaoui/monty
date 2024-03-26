#include "monty.h"

/**
 * pall - prints all the values on the stack, starting from the top.
 * @heaa__d: double pointer to the stack's head.
 * @valu__ee: Value of the opcode in the Monty file.
 */

void pall(stack_t **heaa__d, unsigned int valu__ee)
{
	stack_t *heaa__d = *heaa__d;
	(void)valu__ee;

	while (heaa__d)
	{
		printf("%d\n", heaa__d->n);
		heaa__d = heaa__d->next;
	}
}
