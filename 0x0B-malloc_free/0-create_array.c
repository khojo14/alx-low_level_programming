#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size - size of array
 * @c - character to initialize array
 *
 * Return NULL if @size is 0 or pointer to array
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}

	char *ptr;

	ptr = malloc(sizeof(c) * size);

	return (ptr);
}
