#include <stdio.h>

/**
 *main - receives no argument
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		putchar('0' + i);
	}
	for (j = 0; j < 6; j++)
	{
		putchar('a' + j);
	}
	putchar('\n');
	return (0);
}
