#include "main.h"

/**
 * _isupper - checks for alphabetic character
 * @c: the parameter of the function
 *
 * Return: 1 (Success)
 */

int _isupper(int c)
{
	/* check if the argument is upper */
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
