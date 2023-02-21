#include "main.h"

/**
 * _isalpha- checks for alphabetic character
 *
 * @c: parameter to be printed
 *
 * Return: (1) if it is an alphabet character
 * and (0) if not
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
