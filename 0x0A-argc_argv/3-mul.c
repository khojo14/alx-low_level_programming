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
	int res;

	if (argc == 3)
		res = atoi(argv[1]) * atoi(argv[2]);
		return (res);
	else
		return (1);
}
