#include "monty.h"

char *_strdup(char *str)
{
    char *new = malloc(strlen(str) + 1);
    strcpy(new, str);
    return new;
}