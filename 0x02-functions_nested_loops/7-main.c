#include "main.h"

/**
 * main - check the code
 * _putchar - prints a character
 * print_last_digit - prints last digit of an integer
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
