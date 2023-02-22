#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long m = 0, n = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = m + n;
		printf("%lu", sum);

		m = n;
		n = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
