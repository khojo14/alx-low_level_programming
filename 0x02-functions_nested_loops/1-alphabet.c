#include "main.h"
/**
 * main- main function
 *
 * print_alphabet- prints alphabets
 *
 * Return: (0) Success
 */

void print_alphabet(void)
{
	char i;

	i = 'a';
	do {
		_putchar(i);
		i++;
	} while (i <= 'z');
	_putchar('\n');
}
