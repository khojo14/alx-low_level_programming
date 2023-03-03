#include "main.h"

/**
 * _strcat -  concatenates two strings
 * @dest: first string parameter
 * @src: second string parameter
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int lendest = 0;
	int lensrc = 0;
	int i;
	char *c = dest;

	while (dest[lendest] != '\0')
	{
		lendest++;
	}

	while (src[lensrc] != '\0')
	{
		lensrc++;
	}
	for (i = 0; i <= lensrc; i++)
		dest[lendest + i] = src[i];

	return (c);
}
