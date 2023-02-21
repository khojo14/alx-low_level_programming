#include "main.h"
/**
 * print_alphabet - function that prints lower alphabets in lowe case
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
