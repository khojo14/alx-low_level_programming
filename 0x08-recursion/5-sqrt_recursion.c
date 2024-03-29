#include "main.h"
/**
 * check - finds the square root
 * @a: potential square root of @b
 * @b: natural number
 *
 * Return: square root of @b
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: natural number
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
