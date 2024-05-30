#include "main.h"

/**
 * main - returns the multiplication of two arguments
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: the result or 1 if error
 */
int main(int argc, char *argv[])
{
	int i, res = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		return (res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
