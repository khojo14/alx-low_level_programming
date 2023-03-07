#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string to be searched
 * @c: character to be located
 *
 * Return: first occurence of @c
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
