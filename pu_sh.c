#include "monty.h"

void push(stack_t **he__aadd, unsigned int val_uee)
{
    stack_t *ne_w_node = malloc(sizeof(stack_t));
    if (!new_node)
    {
        exit(EXIT_FAILURE);
    }
    ne_w_node->n = val_uee;
    ne_w_node->prev = NULL;
    ne_w_node->next = *he__aadd;

    if (*he__aadd)
    {
        (*he__aadd)->prev = ne_w_node;
    }

    *he__aadd = ne_w_node;
    
}