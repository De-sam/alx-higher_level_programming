#include <stdio.h>

/**
 *main - This receives no argument
 *
 *Return: Alwaysw 0 (Success)
 */
int main(void)
{
	char alpha1, alpha2;

	for (alpha1 = 'a'; alpha1 <= 'z'; alpha1++)
	{
		putchar(alpha1);
	}

	for (alpha2 = 'A'; alpha2 <= 'Z'; alpha2++)
	{
		putchar(alpha2);
	}
	putchar('\n');
	return (0);
}
