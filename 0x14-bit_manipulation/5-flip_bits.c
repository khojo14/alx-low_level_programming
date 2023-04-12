#include "main.h"

/**
 * flip_bits - calculates the number of bits needed to flip to get from one number to another.
 * @n: the first number
 * @m: the second number
 *
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference = n ^ m;
	unsigned int num_bits = 0;

	while (difference != 0)
	{
		num_bits += difference & 1;
		difference >>= 1;
	}

	return (num_bits);
}
