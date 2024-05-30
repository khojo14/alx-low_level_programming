#include "main.h"

/**
 * main - returns the sum of all arguments
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: the result or 1 if error
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		char *endptr;
		int num = strtol(argv[i], &endptr, 10);

		if (*endptr != '\0' || num < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", sum);
	}
	return (0);
}
