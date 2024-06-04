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
	char *copy_string;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	ptr = malloc(sizeof(char) * (len + 1));
	if (copy_string == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy_string[i] = str[i];
	copy_string[len] = '\0';

	return (ptr);
}
