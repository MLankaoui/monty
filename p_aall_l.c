#include "monty.h"

/**
 * pall - prints all the values on the stack, starting from the top.
 * @heea__add: double pointer to the stack's head.
 * @va_luee: Value of the opcode in the Monty file.
 */

void pall(stack_t **heea__add, unsigned int va_luee)
{
	stack_t *curr__eent = *heea__add;
	(void)va_luee;

	while (curr__eent)
	{
		printf("%d\n", curr__eent->n);
		curr__eent = curr__eent->next;
	}
}
