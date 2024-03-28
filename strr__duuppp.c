#include "monty.h"
/**
 * _str_dup - Duplicates a string.
 * @str: Pointer to the string to duplicate.
 *
 * Return: Pointer to the duplicated string if successful, NULL otherwise.
 */

char *_str_dup(char *str)
{
	unsigned int i;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	dup = (char *) malloc((strlen(str) + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= strlen(str); i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}

