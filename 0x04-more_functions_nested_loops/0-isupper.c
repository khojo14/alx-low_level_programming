#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @x: character to check
 *
 * Return: 0 if yes or 1 if no
 */
int _isupper(int x)

{
	if (x >= 'A' && x <= 'Z')
		return (1);
	else
		return (0);

}
