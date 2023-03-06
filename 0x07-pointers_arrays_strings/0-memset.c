#include "main.h"

/**
 * _memset - sets the first @n bytes of the memory area pointed to
 * by @s with the constant type @b
 *
 * @s: character with memory pointed to
 * @b: constant byte to be set
 * @n: first n bytes of the memory
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
