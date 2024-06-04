#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string
 *
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
		return (NULL);

	ptr = malloc(sizeof(str));
	if (ptr == NULL)
		return (NULL);
	ptr[0] = str;

	return (ptr);
}
