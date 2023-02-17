#include <stdio.h>
/**
 * main - prints lower case alphabets in reverse order
 *
 * Return: (0) Success
 */

int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
