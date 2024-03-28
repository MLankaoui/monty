#include "monty.h"

char *_strdup(char *str)
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