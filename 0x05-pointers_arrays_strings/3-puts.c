#include "main.h"

/**
 *_puts - prints a string followed by a new line
 *@str: is the parameter
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
