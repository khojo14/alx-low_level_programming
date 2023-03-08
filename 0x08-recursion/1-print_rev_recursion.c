#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * _putchar - prints a character
 * @s: string to be printed
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
