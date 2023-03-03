#include "main.h"

/**
 * _strncpy -  concatenates two strings
 *
 * @dest: first string parameter
 * @src: second string parameter
 * @n: length of src to be used
 * Return: concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	/*char *c = dest;*/

	for (i = 0; i < n && *(src + i); i++)
		*(dest + i) = *(src + i);
	for (; i < n; i++)
		*(dest + i) = '\0';

	return (dest);
}
