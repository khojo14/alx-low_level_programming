#include <stdio.h>
/**
 * main - prints lower case alphabets in reverse order
 *
 * Return: (0) Success
 */

int main(void)
{
	char c;
	int n;

	n = 0;
	while (n < 10)
	{
		putchar((n % 10) + '0');
		n++;
	}
	c = 'a';
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
