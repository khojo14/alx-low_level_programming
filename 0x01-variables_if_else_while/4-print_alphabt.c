#include <stdio.h>
/**
 * main - prints alphabets in lower case except q and e
 *
 * Return: (0) Success
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z' && c != 'e' && c != 'q'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
