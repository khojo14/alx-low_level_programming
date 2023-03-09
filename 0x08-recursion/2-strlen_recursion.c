#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: string to scan
 *
 * Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i=0;

	if(*s)
	{
		i++;
		i=+_strlen_recursion(char *s);
	}

	return (i);
}
