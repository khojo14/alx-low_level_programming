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

	if (argc != 3)
        {
                printf("Error\n");
                return (1);
        }
        res = atoi(argv[1]) * atoi(argv[2]);
        print("%d\n", res);
        return (0);                                                                                                                             }
