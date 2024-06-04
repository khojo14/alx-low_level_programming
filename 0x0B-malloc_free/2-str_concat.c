#include "main.h"

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure, pointer to allocated
 * memory of concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	char result;

	result = strcat(s1, s2);
	ptr = malloc(sizeof(result));
	if (ptr == NULL)
		return (NULL);

	return (ptr);
