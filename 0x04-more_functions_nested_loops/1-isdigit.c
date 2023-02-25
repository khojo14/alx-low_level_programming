#include "main.h"

/**
* _isdigit - checks for a digit (0 through 9)
* @x: char to check
* Return:  0 if it is or 1 if not
**/
int _isdigit(int x)
{
	if (x >= '0' && x <= '9')
		return (1);
	else
		return (0);
}
