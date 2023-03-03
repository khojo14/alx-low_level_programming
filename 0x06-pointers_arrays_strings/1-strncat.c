#include "main.h"

/**
 * _strncat -  concatenates two strings
 *
 * @dest: first string parameter
 * @src: second string parameter
 * @n: length of src to be used
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int lendest = 0;
	int i;
	char *c = dest;

	while (dest[lendest] != '\0')
	{
		lendest++;
	}

	for (i = 0; i < n; i++)
		dest[lendest + i] = src[i];

	return (c);
}
