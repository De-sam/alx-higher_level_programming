#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the parameter of the function
 *
 * Return: 1 (Success)
 */

int _isdigit(int c)
{
	/*checks if the argument is a digit*/
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
