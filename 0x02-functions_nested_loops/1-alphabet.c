#include "main.h"

/**
 *print_alphabet - prints all the letters of the alphabet
 *
 *Return: void
 */

void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
