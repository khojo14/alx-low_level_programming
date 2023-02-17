#include <stdio.h>
/**
 * main - prints lower case alphabets in reverse order
 *
 * Return: (0) Success
 */

int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		while (n < 10)
		{
			putchar((n % 10) + '0');
			n++;
		}
		putchar((n % 10) + '0');
		n++;
	putchar(',');
	putchar('\t');
	}

	return (0);
}
