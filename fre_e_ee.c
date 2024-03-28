#include "monty.h"

void fre__ee(stack_t **hea__add)
{
	stack_t *tmp = *hea__add;

	while (tmp!= NULL) {
		stack_t *tmp2 = tmp->next;
		free(tmp);
		tmp = tmp2;
	}
	*hea__add = NULL;
}
