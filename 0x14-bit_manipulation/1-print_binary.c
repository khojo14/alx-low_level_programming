#include "main.h"

/**
 * _power - calculates the value of base raised to the power of pow
 * @base: base of the exponent
 * @pow: power of the exponent
 *
 * Return: value of base raised to the power of pow
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num = 1;
	unsigned int i;

	for (i = 1; i <= pow; i++)
		num *= base;

	return (num);
}

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, result;
	char flag = 0;

	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}

