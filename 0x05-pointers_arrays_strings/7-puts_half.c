#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: string parameter
 */
void puts_half(char *str)
{
	int index = 0, n;

	while (str[index] != '\0')
		index++;
	if (index + 1 % 2 != '0')
		n = (index - 1) / 2;
	else
		n = (index / 2);
	n++;

	for (index = n; str[index] != '\0'; index++)

	_putchar(str[index]);
	_putchar('\n');
}
