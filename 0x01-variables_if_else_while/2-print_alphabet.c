#include <stdio.h>

/**
 *main - receives no argument
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
