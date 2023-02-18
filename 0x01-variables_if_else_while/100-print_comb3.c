#include <stdio.h>
/**
 * main - prints combination of two single digits
 *
 * Return: (0) Success
 */

int main(void)
{
	int n,m;

	for (n = 0; n < 10; n++)
	{
		for(m = 0; m < 10; n++)
		{
		putchar(n + '0');
		putchar(m + '0');
		if (n < 8 && m < 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');

	return (0);
}
