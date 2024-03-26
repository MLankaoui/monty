#include "monty.h"

void pall(stack_t **heaa__d , unsigned int valu__ee)
{
	stack_t *heaa__d = *heaa__d;
	(void)valu__ee;

	while (heaa__d)
	{
		printf("%d\n", heaa__d->n);
		heaa__d = heaa__d->next;
	}
}
