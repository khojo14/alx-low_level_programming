#include "main.h"
/**
 * print_number - prints an integer
 * @x:.input, integer parameter
 *
 *
 */

void print_number(int x)
{
	unsigned int i = x;

	if (x < 0)
	{
		_putchar(45);
		i = -i;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
