#include <stdio.h>
/**
 * main - prints alphabets in lower case
 *
 * Return: (0) Success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
		putchar('\n');
	}

	return (0);
}
