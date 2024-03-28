#include "monty.h"

void p__int(stack_t **hea__dd, unsigned int value)
{
    stack_t *curr__rennt = *hea__dd;
    (void)value;

    if (curr__rennt)
    {
        printf("%d\n", curr__rennt->n);
    }

    else
    {
        fprintf(stderr, "Error: can't pint, stack empty\n");
		exit(EXIT_FAILURE);
    }
}